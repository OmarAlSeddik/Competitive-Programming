num_of_values = int(input())
nums = [int(num) for num in input().split()]

even = 0
odd = 0
positive = 0
negative = 0

for num in nums:
    if num > 0: positive += 1
    elif num < 0: negative += 1
    if num % 2: odd += 1
    else: even += 1

print(f"Even: {even}")
print(f"Odd: {odd}")
print(f"Positive: {positive}")
print(f"Negative: {negative}")