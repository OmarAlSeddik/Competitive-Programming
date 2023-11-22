n = int(input())
nums = [int(num) for num in input().split()]

for i in range(len(nums) - 1, -1, -1):
    print(nums[i], end=" ")