def main():
    data0 = input().split()
    n, k = int(data0[0]), int(data0[1])
    data1 = input().split()

    l = [int(i) for i in data1]
    for i in range(1, 2*n):
        if k == 0:
            break
        if i % 2 == 1:
            if l[i] >= 2 + l[i-1] and l[i] >= 2 + l[i+1]:
                l[i] -= 1
                k -= 1

    print(*l)
    return 

if __name__ == '__main__':
    main()
