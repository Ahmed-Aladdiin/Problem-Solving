"""
13 + 4 + 9  = 26
8 + 7 + 1 = 16
11 + 4 + 7 = 22
10 + 9 + 1 = 20
5 + 4 + 1 = 10
16 + 9 + 7 = 32
"""

def main():
    rows = input().split()
    rows = [int(i) for i in rows]
    cols = input().split()
    cols = [int(i) for i in cols]
    digs = input().split()
    digs = [int(i) for i in digs]

    for a in range(1, 10):
        for b in range(1, 10):
            if b == a:
                continue
            for c in range(1, 10):
                if c == b or c == a:
                    continue
                for d in range(1, 10):
                    if d == c or d == b or d == a:
                        continue
                    if a + b == rows[0] and a + c == cols[0] and c + d == rows[1] and b + d == cols[1] and a + d == digs[0] and b + c == digs[1]:
                        print(a, b)
                        print(c, d)
                        exit()
    print(-1)
    return

if __name__ == "__main__":
    main()
