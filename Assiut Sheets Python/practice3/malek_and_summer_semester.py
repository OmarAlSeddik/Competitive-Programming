t = int(input())

ans = []

for _ in range(t):
    n, m = [float(x) for x in input().split()]
    grades = [int(x) for x in input().split()]
    count = 0
    for grade in grades:
        if grade >= 50:
            count += 1
    if count / n > m:
        ans.append("YES")
    else:
        ans.append("NO")

for a in ans:
    print(a)
