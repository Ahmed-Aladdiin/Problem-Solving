def main():
    data = input().split()
    n, k = int(data[0]), int(data[1])

    count = 0
    for _ in range(0, n):
        num = input()
        if len(num) < k + 1:
            continue
        digits = {i for i in num if int(i) <= k}
        if len(digits) == k + 1:
            count += 1

    print(count)
if __name__ == '__main__':
    main()
