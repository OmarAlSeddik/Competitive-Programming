from collections import defaultdict

n, m = [int(num) for num in input().split()]
nums = [int(num) for num in input().split()]
hash = defaultdict(int)

for num in nums:
    hash[num] += 1

[print(hash[i]) for i in range(1, m + 1)]
