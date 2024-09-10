def main():
    n = int(input())
    heights = input().split()
    heights = [int(i) for i in heights]

    maxi, count_equal, count, pre = 1, 0, 1, heights[0]
    isInc = True

    for i in heights[1:]:
        if isInc:
            if i >= pre:
                count += 1
            else:
                isInc = False
                count += 1
                count_equal = 1
        else:
            if i <= pre:
                count += 1
                if i == pre:
                    count_equal += 1
            else:
                count = count_equal + 1
                isInc = True
        maxi = max(maxi, count) 
        # print(f'for {i}, count = {count}')
        pre = i

    print(maxi)
    return

if __name__ == '__main__':
    main()


