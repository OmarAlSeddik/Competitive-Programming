a, b = [int(num) for num in input().split()]

highest = 1
first = 1

for i in range(min(a, b), max(a, b) + 1):
    count = 1
    for j in range(2, i):
        if i % j == 0:
            count += 1
            if count > highest:
                highest = count
                first = i

print(first)
