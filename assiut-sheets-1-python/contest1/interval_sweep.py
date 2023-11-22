a, b = [int(num) for num in input().split()]

if abs(a - b) > 1 or (a == 0 and b == 0):
    print("NO")

else:
    print("YES")
