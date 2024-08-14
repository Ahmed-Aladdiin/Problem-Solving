import math

def main():
    data = input().split()
    l, r = int(data[0]), int(data[1])

    for a in range(l, r - 1):
        for b in range (a+1, r):
            if math.gcd(a, b) == 1:
                for c in range(b + 1, r+1):
                    if math.gcd(b, c) == 1:
                        if math.gcd(a, c) != 1:
                            print(a, b, c)
                            exit()
    print(-1)
if __name__ == '__main__':
    main()
