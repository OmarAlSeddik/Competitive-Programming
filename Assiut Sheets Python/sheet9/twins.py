n = int(input())
cs = [int(num) for num in input().split()]

cs.sort(reverse=True)
coin_sum = sum(cs)
sum1 = 0
sum2 = 0
count = 0

for c in cs:
    if sum1 <= coin_sum // 2:
        sum1 += c
        count += 1
    else:
        sum2 += c

print(count)
