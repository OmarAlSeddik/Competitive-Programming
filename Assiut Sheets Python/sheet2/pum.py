num = int(input())
current = 1

for i in range(num):
    for j in range(4):
        if current % 4 == 0: print("PUM", end="")
        else: print(current, end=" ")
        current += 1
    print()