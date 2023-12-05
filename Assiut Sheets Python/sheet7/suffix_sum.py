def get_suffix_sum(nums, curr_sum):
    if not nums:
        return curr_sum
    curr_sum += nums[-1]
    nums = nums[:-1]
    return get_suffix_sum(nums, curr_sum)


n, m = [int(num) for num in input().split()]
nums = [int(num) for num in input().split()[-m:]]

print(get_suffix_sum(nums, 0))
