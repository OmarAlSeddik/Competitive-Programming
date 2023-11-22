from collections import defaultdict

n = int(input())

hash_map = defaultdict(int)
friends = [int(target) for target in input().split()]

for i, target in enumerate(friends):
    hash_map[target] = i + 1

for i in range(n):
    if i == n - 1:
        print(hash_map[i + 1])
    else:
        print(hash_map[i + 1], end=" ")
