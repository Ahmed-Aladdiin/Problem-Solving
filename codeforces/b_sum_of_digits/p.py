
def main():
    s = input()
    if len(s) == 1:
        print(0)
        return

    count = 0

    while len(s) > 1:
        sum = 0
        for i in range(len(s)):
            sum += int(s[i])
        count += 1
        s = str(sum)

    print(count)
    return

if __name__ == '__main__':
    main()

