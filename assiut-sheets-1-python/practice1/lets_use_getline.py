s = input()
x = ""

for c in s:
    if c == "\\":
        break
    x += c

print(x)
