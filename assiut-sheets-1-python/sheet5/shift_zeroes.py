def shift_zeroes(nums, n):
    is_shifted = False
    while not is_shifted:
        is_shifted = True
        for i in range(n-1):
            if nums[i] == "0" and nums[i+1] != "0":
                nums[i] = nums[i+1]
                nums[i+1] = "0"
                is_shifted = False
    return " ".join(nums)


n = int(input())
nums = input().split()
print(shift_zeroes(nums, n))
