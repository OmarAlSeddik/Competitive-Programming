num = int(input())
width = num * 2 - 1

for i in range(num):
    for j in range(width):
        if (j >= int(width / 2) - i and j <= int(width / 2) + i): print("*", end="")
        elif (not j >= int(width / 2) + i): print(" ", end="")
    print()

for i in range(num):
    for j in range(width):
        if (j >= int(width / 2) - (num - i - 1) and j <= int(width / 2) + (num - i - 1)): print("*", end="")
        elif (not j >= int(width / 2) + (num - i - 1)): print(" ", end="")
    print()
