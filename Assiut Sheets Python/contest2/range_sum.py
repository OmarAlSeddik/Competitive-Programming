t = int(input())

sums = []

for _ in range(t):
    n1, n2 = [int(n) for n in input().split()]
    sums.append(((n1 + n2) / 2) * (n2 - n1 + 1))

for current_sum in sums:
    print(int(current_sum))
