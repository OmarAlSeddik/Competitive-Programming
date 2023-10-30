num1, num2 = input().split()
num1 = int(num1)
num2 = int(num2)

print("Multiples") if num1 % num2 == 0 or num2 % num1 == 0 else print("No Multiples")
