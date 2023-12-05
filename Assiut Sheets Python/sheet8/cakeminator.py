r, c = [int(n) for n in input().split()]

rows = [0] * r
cols = [0] * c
count = 0

for i in range(r):
    row = list(input())
    for j in range(c):
        if row[j] == "S":
            rows[i] = 1
            cols[j] = 1

for i in range(r):
    for j in range(c):
        if not (rows[i] and cols[j]):
            count += 1

print(count)
