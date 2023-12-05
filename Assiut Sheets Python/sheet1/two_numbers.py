import math

num1, num2 = input().split()
num1 = int(num1)
num2 = int(num2)
round_down = False

if num1 / num2 % 1 < 0.5:
    round_down = True

print(f"floor {num1} / {num2} = {math.floor(num1 / num2)}")
print(f"ceil {num1} / {num2} = {math.ceil(num1 / num2)}")
print(f"round {num1} / {num2} = {math.floor(num1 / num2) if round_down else math.ceil(num1 / num2)}")
