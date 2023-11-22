n = int(input())
students = [int(n) for n in input().split()]

x = []
y = []
z = []

for i, student in enumerate(students):
    if student == 1:
        x.append(i + 1)
    elif student == 2:
        y.append(i + 1)
    else:
        z.append(i + 1)


teams = min(len(x), len(y), len(z))
print(teams)

for i in range(teams):
    print(x[i], y[i], z[i])
