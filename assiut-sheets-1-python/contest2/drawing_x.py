n = int(input())
output = []

for i in range(n):
    output.append([])
    for j in range(n):
        if i == n // 2 and j == n // 2:
            output[-1].append("X")
        elif i == j:
            output[-1].append("\\")
        elif j == n - i - 1:
            output[-1].append("/")
        else:
            output[-1].append("*")

for i in range(n):
    print("".join(output[i]))
