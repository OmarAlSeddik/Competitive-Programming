n = int(input())
nums = [int(num) for num in input().split()]

for i, num in enumerate(nums):
    if (num <= 10):
        print(f"A[{i}] = {num}")