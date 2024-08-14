def main():
    prime = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53]
    data = input().split()
    n, m = int(data[0]), int(data[1])
    ind_n = prime.index(n)
    ans = 'NO'

    if m in prime:
        if prime.index(m) == ind_n + 1:
            ans = 'YES'
    print(ans)
if __name__ == '__main__':
    main()
