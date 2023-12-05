n, k = [int(num) for num in input().split()]
a = [int(num) for num in input().split()]

a.sort(reverse=True)
max_sum = 0
for i in range(k):
    max_sum += a[i]

print(max_sum)
