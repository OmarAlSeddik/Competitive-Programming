num = int(input())
nums = []

for i in range(num):
    if i == 0: nums.append(0)
    elif i == 1: nums.append(1)
    else: nums.append(nums[i - 1] + nums[i - 2])

print(" ".join(str(num) for num in nums))