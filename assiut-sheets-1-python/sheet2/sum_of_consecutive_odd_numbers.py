def sum_of_odds(num1, num2):
    sum = 0
    for i in range(min(num1, num2) + 1, max(num1, num2)):
        if i % 2: sum += i
    return sum

numCount = int(input())
inputs = []

for i in range(numCount):
    nums = [int(num) for num in input().split()]
    inputs.append(nums)

for i in range(numCount):
    print(sum_of_odds(inputs[i][0], inputs[i][1]))