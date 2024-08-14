def main():
    data = int(input())
    dir = input()
    dis = input().split()
    dis = [int(i) for i in dis]

    mini = 888888888888
    for i in range(0, data-1):
        if dir[i] == 'R' and dir[i+1] == 'L':
            sum = dis[i] + dis[i+1]
            center = sum//2
            time = center - dis[i]
            mini = min(mini, time)
    
    if mini == 888888888888:
        mini = -1

    print(mini)

    return


if __name__ == "__main__":
    main()
