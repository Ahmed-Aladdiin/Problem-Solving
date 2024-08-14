def main():
    data = input()
    data = [int(i) for i in data]
    data = [i if i < 5 or i == 9 else 9 - i for i in data]
    data = [str(i) for i in data]
    ans = "".join(data)
    ans = ans.lstrip('0')
    print(ans)
    return

if __name__ == "__main__":
    main()
