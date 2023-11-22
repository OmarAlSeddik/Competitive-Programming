numCount = int(input())
nums = []

def factorial(num):
    if num == 0: return 1
    return num * factorial(num - 1)

for i in range(numCount):
    nums.append(int(input()))

for num in nums:
    print(factorial(num))