#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution {
    struct Node {
        map<char, Node*> letters;
        bool isWord;
        Node(): isWord(false) {}
    };
    Node *root;
    void insert(Node* node, int ind, string& s) {
        if (ind >= s.length()) {
            node->isWord = true;
            return;
        }
        if (node->letters.find(s[ind]) == node->letters.end()) node->letters[s[ind]] = new Node();
        insert(node->letters[s[ind]], ind+1, s);
    }
    bool solve(Node* node, int ind, string s) {
        if (ind >= s.length()) if (node->isWord) return true;
            else return false;
        if (node->letters.find(s[ind]) == node->letters.end()) if (node == root) return false;
            else return solve(root, 0, s.substr(ind));
        bool fl = false;
        if (node->isWord) fl = solve(root, 0, s.substr(ind));
        return solve(node->letters[s[ind]], ind+1, s) || fl;
    }
    bool solve2(string s) {
        int ind = 0;
        Node *node = root;
        bool fl = false;
        while(true) {
            if (ind >= s.length()) return node->isWord || fl;
            if (node->letters.find(s[ind]) == node->letters.end()) if (node == root) return false;
                else if (node->isWord) return solve2(s.substr(ind));
                else return false;
            if (node->isWord) fl = solve2(s.substr(ind)) || fl;
            node = node->letters[s[ind]];
            ind++;
        }
    }
public:
    Solution() {root = new Node();}
    bool wordBreak(string s, vector<string>& wordDict) {
        for (string& s: wordDict) insert(root, 0, s);
        return solve2(s);
    }
};

int main()
{
    Solution s;
    vector<string> str = {"leet","code"};
    string word = "leetcode";
    bool re = s.wordBreak(word, str);
    cout << re;
    return 0;
}