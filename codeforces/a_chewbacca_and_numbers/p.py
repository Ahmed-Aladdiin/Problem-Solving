def main():
    data = input()
    data = [int(i) for i in data]
    data = [i if i < 5 else 9 - i for i in data]
    data = [str(i) for i in data]
    ans = "".join(data)

    if ans[0] == '0':
        ans = '9' + ans[1:]
    print(ans)
    return

if __name__ == "__main__":
    main()
