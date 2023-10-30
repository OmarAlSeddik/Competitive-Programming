num = input()
num = [int(digit) for digit in num]
first_digit = num[0]

print("ODD") if first_digit % 2 else print("EVEN")