n = int(input())
nums = [int(num) for num in input().split()]

for num in nums:
    if num > 0:
        num = 1
    elif num < 0:
        num = 2
    print(num, end=" ")