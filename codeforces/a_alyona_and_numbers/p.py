"""
1 1
2 2
3 3
4 4
5 5
6 6
  7
  8
  9
  10
  11
  12

(x + y) % 5 = (x%5 + y%5)%5 = 0, 0 or 5, 5 = 1 4, 2 3, 3 2, 4 1
I want to know how many has mod of 0 nC1 * mC1

2 + 4 + 
"""

def main():
    l = {i:0 for i in range(0, 5)}
    ll = {i:0 for i in range(0, 5)}
    data = input().split()
    n, m = int(data[0]), int(data[1])

    for i in range(1, n+1):
        l[i%5] += 1
    for i in range(1, m+1):
        ll[i%5] += 1

    count = 0
    count += l[0] * ll[0]

    for i in range(1, 5):
        count += l[i] * ll[5-i]

    print(count)

if __name__ == "__main__":
    main()
