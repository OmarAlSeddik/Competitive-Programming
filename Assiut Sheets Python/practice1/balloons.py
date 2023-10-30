t = int(input())
answers = []

for i in range(t):
    n = int(input())
    ps = [int(num) for num in input().split()]
    count = 0
    for p in ps:
        if p:
            count += 1
    answers.append(count)

for answer in answers:
    print(answer)
