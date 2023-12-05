def get_max(nums, max_num, i=0):
    if i == len(nums):
        return
    max_num = max(nums[i], max_num)
    if i == len(nums) - 1:
        print(max_num)
    else:
        print(max_num, end=" ")
    return get_max(nums, max_num, i + 1)


n = int(input())
nums = [int(num) for num in input().split()]

get_max(nums, nums[0])
