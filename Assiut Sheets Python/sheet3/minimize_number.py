def all_are_even(nums):
    for num in nums:
        if num % 2:
            return False
    return True


num_count = int(input())
nums = [int(num) for num in input().split()]
count = 0

while (all_are_even(nums)):
    for i in range(len(nums)):
        nums[i] /= 2
    count += 1

print(count)
