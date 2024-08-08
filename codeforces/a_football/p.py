n = int(input())
map = {}
while n > 0:
    p = input()
    if p in map:
        map[p] += 1
    else:
        map[p] = 1
    n -= 1

winner, score = '', 0
for team, sc in map.items():
    if sc > score:
        winner = team
        score = sc

print(winner)
