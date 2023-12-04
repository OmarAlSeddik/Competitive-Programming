l, r = [int(num) for num in input().split()]
count = 0

for i in range(l, r + 1):
    divisors = []
    for j in range(1, i // 2 + 1):
        if i % j == 0:
            divisors.append(j)
    if sum(divisors) == i:
        count += 1

print(count)
