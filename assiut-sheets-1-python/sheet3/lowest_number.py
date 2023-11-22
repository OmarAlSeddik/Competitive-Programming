n = int(input())
nums = [int(num) for num in input().split()]

lowest_num = nums[0]
lowest_pos = 0

for i, num in enumerate(nums):
    if (num < lowest_num):
        lowest_num = num
        lowest_pos = i

print(f"{lowest_num} {lowest_pos + 1}")