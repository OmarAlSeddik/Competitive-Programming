def get_maximum(nums, max_num):
    if not nums:
        return max_num
    max_num = max(nums[-1], max_num)
    nums.pop()
    return get_maximum(nums, max_num)


n = int(input())
nums = [int(num) for num in input().split()]

print(get_maximum(nums, nums[0]))
