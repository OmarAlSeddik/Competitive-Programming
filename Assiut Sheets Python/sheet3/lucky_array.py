num_count = int(input())
nums = [int(num) for num in input().split()]
minNum = min(nums)
count = 0

for num in nums:
    if num == minNum:
        count += 1

print("Lucky") if count % 2 else print("Unlucky")
