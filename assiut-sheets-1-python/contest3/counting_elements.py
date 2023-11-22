from collections import defaultdict

n = int(input())
a = [int(num) for num in input().split()]

count = 0
exists = defaultdict(bool)

for x in a:
    exists[x] = True

for x in a:
    if exists[x+1]:
        count += 1

print(count)
