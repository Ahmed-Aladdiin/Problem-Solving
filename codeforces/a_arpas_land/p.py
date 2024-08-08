n = int(input())

if n == 0:
    print(1)
else :
    ans = {1: 8, 2: 4, 3: 2, 0: 6}
    print(ans[n%4])

exit()
