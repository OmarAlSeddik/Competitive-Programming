a, b, n = [int(num) for num in input().split()]
s = input()
print(s[:len(s)//2] + str(a * b) + s[len(s)//2:])
