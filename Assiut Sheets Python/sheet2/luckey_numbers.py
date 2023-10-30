def isLucky(num):
    while (num > 0):
        digit = num % 10
        if digit != 4 and digit != 7:
            return False
        num = int(num / 10)
    return True

nums = [int(num) for num in input().split()]
luckyExists = False

for i in range(nums[0], nums[1] + 1):
    if isLucky(i):
        print(i, end=" ")
        luckyExists = True

if not luckyExists: print(-1)