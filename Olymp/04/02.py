n = int(input())
dresses = list(map(int, input().split()))

seen = set()
ans = n

for day in range(n):
    seen.add(dresses[day])
    if len(seen) == 3:
        ans = day + 1
        break

print(ans)
