ra, ca = [int(n) for n in input().split()]

a = []

for _ in range(ra):
    row = [int(n) for n in input().split()]
    a.append(row)

rb, cb = [int(n) for n in input().split()]

b = []

for _ in range(rb):
    row = [int(n) for n in input().split()]
    a.append(row)

c = []

for i in range(ra):
    c.append([])
    result = 0
    for j in range(cb):
        a[i][j]
