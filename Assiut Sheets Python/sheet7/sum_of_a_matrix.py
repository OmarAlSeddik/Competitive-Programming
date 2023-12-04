def get_sum(a, b, r, c, x, i=0):
    if i == r:
        return x
    x.append([])
    for j in range(c):
        x[i].append(a[i][j] + b[i][j])
    return get_sum(a, b, r, c, x, i + 1)


r, c = [int(n) for n in input().split()]

a = []
b = []
x = []

for i in range(r):
    a.append([int(num) for num in input().split()])

for i in range(r):
    b.append([int(num) for num in input().split()])

get_sum(a, b, r, c, x)

for i in range(r):
    for j in range(c):
        print(x[i][j], end=" ")
    print("")
