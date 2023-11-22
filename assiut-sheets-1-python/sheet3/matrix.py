size = int(input())
array = []
sum1 = 0
sum2 = 0

for _ in range(size):
    nums = [int(num) for num in input().split()]
    array.append(nums)

for i in range(size):
    sum1 += array[i][i]
    sum2 += array[i][size - i - 1]

print(abs(sum1 - sum2))
