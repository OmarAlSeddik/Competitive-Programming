a, b = [bin(int(n)) for n in input().split()]

length = min(len(a), len(b))
result = list(a)

for i in range(2, length):
    if (a[i] == "0" and b[i] == "1"):
        result[i] = "1"
    elif (a[i] == "1" and b[i] == "1"):
        result[i] = "0"

print(int("".join(result), 2))
