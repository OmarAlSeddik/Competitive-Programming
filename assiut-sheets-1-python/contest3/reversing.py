n = int(input())
a = [num for num in input().split()]
x = []

for z in a:
    if z != "0":
        x.append(z)
    else:
        x = x[::-1]
        x.append(z)

print(" ".join(x))
