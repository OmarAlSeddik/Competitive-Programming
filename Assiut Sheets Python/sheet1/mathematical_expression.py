equation = input().split()
num1 = int(equation[0])
num2 = int (equation[2])
result = int(equation[4])
operator = equation[1]

print("Yes") if (eval(f"{num1}{operator}{num2} == {result}")) else print(eval(f"{num1}{operator}{num2}"))