comparison = input()
operator = comparison.split()[1]
num1 = int(comparison.split()[0])
num2 = int(comparison.split()[2])

if operator == "=":
    print("Right") if num1 == num2 else print("Wrong")

else: print("Right") if eval(comparison) else print("Wrong")