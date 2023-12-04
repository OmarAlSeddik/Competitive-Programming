n = int(input())

total_sum = 0
count = 0

for i in range(1, n+1):
    total_sum += i

    if total_sum <= n:
        count += 1
    else:
        break

print(count)
