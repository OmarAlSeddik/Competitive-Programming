def sumOfDigits(num):
    sum = 0
    while (num > 0):
        digit = num % 10
        sum += digit
        num = int(num / 10)
    return sum

n, a, b = [int(num) for num in input().split()]
sum = 0

for i in range(n + 1):
    if sumOfDigits(i) >= a and sumOfDigits(i) <= b:
        sum += i

print(sum)
    