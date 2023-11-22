n, h = [int(x) for x in input().split()]
heights = [int(x) for x in input().split()]
count = 0

for height in heights:
    if height > h:
        count += 2
    else:
        count += 1

print(count)
