n = int(input())
s = input()

a = []

for i in range(n-2, -1, -2):
    a.append(s[i])

for i in range(n-1, -1, -2)[::-1]:
    a.append(s[i])

print("".join(a))
