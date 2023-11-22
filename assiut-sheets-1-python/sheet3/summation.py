numCount = int(input());
nums = [int(num) for num in input().split()]
sum = 0

for num in nums:
    sum += num

print(abs(sum))