n = int(input())
nums = [int(num) for num in input().split()]
sorted = False

while (not sorted):
    sorted = True
    for i in range(len(nums) - 1):
        if nums[i] > nums[i+1]:
            temp = nums[i]
            nums[i] = nums[i+1]
            nums[i+1] = temp
            sorted = False

[print(num, end=" ") for num in nums]