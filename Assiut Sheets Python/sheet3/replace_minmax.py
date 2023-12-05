num_count = int(input())
nums = [int(num) for num in input().split()]

max_num = nums[0]
max_index = 0
min_num = nums[0]
min_index = 0

for i, num in enumerate(nums):
    if num > max_num:
        max_num = num
        max_index = i

    elif num < min_num:
        min_num = num
        min_index = i

nums[max_index] = min_num
nums[min_index] = max_num
[print(num, end=" ") for num in nums]
