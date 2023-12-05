n = int(input())
nums = [int(num) for num in input().split()]

results = []

for num in nums:
    count = 0
    while num > 1:
        num // 2
        count += 1
    results.append(count)

print(max(results))