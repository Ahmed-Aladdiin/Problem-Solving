"""
1
2 3 5 4, 1 6, 6
1
2 4 5 3, 1 6, 6

4
2 6 5 1, 3 4, 3
4
4 1 3 6, 5 2
"""
def main():
    n = int(input())
    f = int(input())
    accept = [str(i) for i in range(1, 7) if i != f and i != 7 - f]
    
    ans = 'YES'
    for _ in range(0, n):
        data = input().split()
        if data[0] not in accept or data[1] not in accept:
            ans = 'NO'
    print(ans)

if __name__ == '__main__':
    main()
