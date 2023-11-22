from collections import defaultdict

n = int(input())
x = [int(num) for num in input().split()]

count = defaultdict(bool)
result = 0

for num in x:
    if count[num]:
        result += 1
    count[num] = True

print(result) if result else print(-1)
