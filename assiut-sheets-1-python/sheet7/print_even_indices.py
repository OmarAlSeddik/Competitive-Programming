def print_even_indices(nums, n, index=0):
    if index >= n:
        return
    print_even_indices(nums, n, index + 2)
    if index == 0:
        print(nums[index])
    else:
        print(nums[index], end=" ")


n = int(input())
nums = [int(num) for num in input().split()]
print_even_indices(nums, n)
