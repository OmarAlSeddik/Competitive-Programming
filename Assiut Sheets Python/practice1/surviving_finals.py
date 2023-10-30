x, operation, y, comparison, z = input().split()
x = int(x)
y = int(y)
z = int(z)
lhs = None

if operation == "-":
    lhs = x - y
elif operation == "+":
    lhs = x + y
else:
    lhs = x * y

if comparison == "<":
    print("YES") if lhs < z else print("NO")
elif comparison == ">":
    print("YES") if lhs > z else print("NO")
else:
    print("YES") if lhs == z else print("NO")
