from collections import defaultdict


n, k = [int(num) for num in input().split()]
output = 0

for _ in range(n):
    num = int(input())
    num_hash = defaultdict(int)
    is_good_number = True

    for i in range(k + 1):
        num_hash[i] += 1

    while num > 0:
        digit = num % 10
        if num_hash[digit]:
            num_hash[digit] -= 1
        num //= 10

    for i in range(k + 1):
        if num_hash[i] == 1:
            is_good_number = False

    if is_good_number:
        output += 1

print(output)
