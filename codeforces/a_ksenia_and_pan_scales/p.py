def main():
    first = input()
    ind = first.index('|')
    left = first[:ind]
    right = first[ind+1:]
    second = input()

    half = len(left) + len(right) + len(second)
    half /= 2
    if half - int(half) != 0 or len(left) > half or len(right) > half:
        print("Impossible")
        return

    half = int(half)
    mylen = half - len(left)
    left = left + second[:mylen]
    right = right + second[mylen:]
    print(left + '|' + right)
    return

if __name__ == "__main__":
    main()
