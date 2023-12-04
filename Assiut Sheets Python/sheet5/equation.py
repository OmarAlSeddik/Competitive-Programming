def equation(x, n) -> int:
    sum = 0
    for i in range(2, n + 1, 2):
        sum += x ** i
    return sum


x, n = [int(num) for num in input().split()]
print(equation(x, n))
