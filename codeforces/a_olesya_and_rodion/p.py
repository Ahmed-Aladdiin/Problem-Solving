inp = input()
inp = inp.split(' ')
n, t = int(inp[0]), int(inp[1])

mini, maxi = 10**(n-1), 10**n
start = mini//t

while start*t < mini and start * t < maxi:
    start += 1

ans = start * t

if ans >= mini and ans < maxi and ans > 0:
     print(ans) 
else:
    print(-1)
