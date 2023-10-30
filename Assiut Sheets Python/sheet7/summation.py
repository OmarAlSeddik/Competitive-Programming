def get_sum(nums, curr_sum):
    if not nums:
        return curr_sum
    curr_sum += nums.pop()
    return get_sum(nums, curr_sum)


n = int(input())
nums = [int(num) for num in input().split()]

print(get_sum(nums, 0))
