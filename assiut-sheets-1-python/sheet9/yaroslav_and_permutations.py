from collections import defaultdict
import math

n = int(input())
x = [int(num) for num in input().split()]

count = defaultdict(int)

for num in x:
    count[num] += 1

max_count = max(count.values())

print("YES") if max_count <= math.ceil(n / 2) else print("NO")
