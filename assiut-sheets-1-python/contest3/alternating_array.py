n = int(input())
a = [int(num) for num in input().split()]

count1 = 0
last_positive = a[0] > 0

for i in range(1, len(a)):
    if last_positive and a[i] > 0:
        last_positive = False
        count1 += 1
    elif not last_positive and a[i] < 0:
        last_positive = True
        count1 += 1
    else:
        last_positive = not last_positive

last_positive2 = a[0] < 0
count2 = 0

for i in range(1, len(a)):
    if last_positive and a[i] > 0:
        last_positive = False
        count2 += 1
    elif not last_positive and a[i] < 0:
        last_positive = True
        count2 += 1
    else:
        last_positive = not last_positive

print(min(count1, count2))
