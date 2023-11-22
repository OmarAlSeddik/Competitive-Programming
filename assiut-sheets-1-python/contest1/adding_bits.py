a, b = [list(bin(int(n))[2:]) for n in input().split()]

a = ["0", "b"] + ["0"] * (32 - len(a)) + a
b = ["0", "b"] + ["0"] * (32 - len(b)) + b
result = ["0", "b"]

for i in range(2, 34):
    if (a[i] == "0" and b[i] == "0") or (a[i] == "1" and b[i] == "1"):
        result.append("0")
    else:
        result.append("1")

print(int("".join(result), 2))
