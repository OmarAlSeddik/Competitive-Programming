k, s = [int(num) for num in input().split()]
count = 0
span = min(k, s) + 1

for i in range(span):
    for j in range(span):
        for m in range(span):
            if i + j + m == s:
                count += 1

print(count)