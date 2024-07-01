#include <iostream>
#include <vector>

using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> candies(n);
  for (int & i : candies) cin >> i;

  int a = 0, b = 0, alice_pos = 0, bob_pos = n - 1, turns = 0;
  int alice_last_eaten = 0;
  int bob_last_eaten = 0;
  bool alice_turn = true, did_eat = false;

  while (alice_pos <= bob_pos) {
    if (alice_turn) {
      if (!did_eat) {
        turns++;
        did_eat = true;
      }
      a += candies[alice_pos];
      alice_last_eaten += candies[alice_pos++];
      if (alice_last_eaten > bob_last_eaten) {
        alice_turn = !alice_turn;
        bob_last_eaten = 0;  
        did_eat = false;
      }
    } else {
      if (!did_eat) {
        turns++;
        did_eat = true;
      }
      b += candies[bob_pos];
      bob_last_eaten += candies[bob_pos--];
      if (bob_last_eaten > alice_last_eaten) {
        alice_turn = true;
        alice_last_eaten = 0; 
        did_eat = false;
      }
    }
  }
  
  cout << turns << " " << a << " " << b << endl;
}

int main() {
  int it;
  cin >> it;

  while (it--) solve();
  return 0;
}
