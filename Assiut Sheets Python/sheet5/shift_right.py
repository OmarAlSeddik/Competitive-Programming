def shift_right(nums, n, x):
    for _ in range(x):
        nums_original = nums.copy()
        for i in range(n):
            nums[i] = nums_original[i-1]
    return " ".join(nums)


n, x = [int(num) for num in input().split()]
nums = [num for num in input().split()]

print(shift_right(nums, n, x))
