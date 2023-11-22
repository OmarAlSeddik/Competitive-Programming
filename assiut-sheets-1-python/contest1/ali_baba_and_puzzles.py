a, b, c, d = [int(num) for num in input().split()]

if a + b - c == d:
    print("YES")
elif a + b * c == d:
    print("YES")
elif a - b + c == d:
    print("YES")
elif a - b * c == d:
    print("YES")
elif a * b + c == d:
    print("YES")
elif a * b - c == d:
    print("YES")
else:
    print("NO")
