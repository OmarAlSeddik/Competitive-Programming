def find_x_index(nums, x):
    for i, num in enumerate(nums):
        if num == x:
            return i
    return -1

n = int(input())
nums = [int(num) for num in input().split()]
x = int(input())

print(find_x_index(nums, x))