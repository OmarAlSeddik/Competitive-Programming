from collections import defaultdict


rows, cols = [int(num) for num in input().split()]

hash = defaultdict(bool)

for _ in range(rows):
    nums = [int(num) for num in input().split()]
    for num in nums:
        hash[num] = True

num = int(input())

print("will not take number") if hash[num] else print("will take number")
