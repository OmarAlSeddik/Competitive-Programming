n = int(input())
points = []

for _ in range(n):
    x, y = [int(num) for num in input().split()]
    points.append([x, y])

lines = points[n // 2]

g = 0
m = 0

for i in range(n):
    x, y = points[i]
    if x == lines[0] and y == lines[1]:
        continue
    elif (x > lines[0] and y > lines[1]) or (x < lines[0] and y < lines[1]):
        g += 1
    elif (x > lines[0] and y < lines[1]) or (x < lines[0] and y > lines[1]):
        m += 1

print(g, m)
