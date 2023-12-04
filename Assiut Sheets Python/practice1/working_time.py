t = int(input())
answers = []

for i in range(t):
    n, m = [int(num) for num in input().split()]
    minutes = 0
    for j in range(n):
        start, end = input().split()
        minutes += int(end[3:]) - int(start[3:])
        minutes += (int(end[:2]) - int(start[:2])) * 60
    if minutes / 60 >= m:
        answers.append("YES")
    else:
        answers.append("NO")

for answer in answers:
    print(answer)
