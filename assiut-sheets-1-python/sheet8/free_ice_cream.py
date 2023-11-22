n, x = [int(num) for num in input().split()]

distressed = 0

for _ in range(n):
    action, y = input().split()
    y = int(y)
    if action == "+":
        x += y
    else:
        if y <= x:
            x -= y
        else:
            distressed += 1

print(x, distressed)
