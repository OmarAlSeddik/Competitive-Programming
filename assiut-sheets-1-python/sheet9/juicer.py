n, b, d = [int(num) for num in input().split()]
os = [int(num) for num in input().split()]

waste = 0
count = 0

for o in os:
    if o <= b:
        waste += o
        if waste > d:
            count += 1
            waste = 0

print(count)
