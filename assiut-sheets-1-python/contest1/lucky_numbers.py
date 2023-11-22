a, b = [int(num) for num in list(input())]

if b == 0 or (a % b == 0 or b % a == 0):
    print("YES")

else:
    print("NO")
