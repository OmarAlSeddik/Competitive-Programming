ans = []

while True:
    n1, n2 = [int(x) for x in input().split()]
    if n1 < 1 or n2 < 1:
        break
    sum = 0
    li = []
    for i in range(min(n1, n2), max(n1, n2) + 1):
        sum += i
        li.append(str(i))
    ans.append(" ".join(li) + " sum =" + str(sum))

for a in ans:
    print(a)
