nums = [int(num) for num in input().split()]
sum = 1

for num in nums:
    sum = sum * num

sum = str(sum)
print(sum[-2:])