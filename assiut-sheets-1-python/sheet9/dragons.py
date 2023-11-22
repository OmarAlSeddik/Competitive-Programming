s, n = [int(num) for num in input().split()]

dragons = []

died = False

for i in range(n):
    x, y = [int(num) for num in input().split()]
    dragons.append([x, y])

dragons = sorted(dragons, key=lambda x: x[0])

for dragon in dragons:
    if (dragon[0] < s):
        s += dragon[1]
    else:
        died = True
        break

print("NO") if died else print("YES")
