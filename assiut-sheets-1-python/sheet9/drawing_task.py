n, m, q = [int(num) for num in input().split()]

grid = []

for i in range(n):
    grid.append([])
    for j in range(m):
        grid[-1].append(".")

for _ in range(q):
    r1, c1, r2, c2, s = [x for x in input().split()]
    r1 = int(r1)
    c1 = int(c1)
    r2 = int(r2)
    c2 = int(c2)
    for i in range(min(r1, r2), max(r1, r2) + 1):
        for j in range(min(c1, c2), max(c1, c2) + 1):
            grid[i-1][j-1] = s

for i in range(n):
    for j in range(m):
        print(grid[i][j], end="")
    print("")
