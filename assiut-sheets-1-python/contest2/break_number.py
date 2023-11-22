n = int(input())
nums = [int(num) for num in input().split()]

max_count = 0

for num in nums:
    count = 0
    while num % 2 == 0:
        num /= 2
        print(num)
        count += 1
    max_count = max(max_count, count)

print(max_count)
