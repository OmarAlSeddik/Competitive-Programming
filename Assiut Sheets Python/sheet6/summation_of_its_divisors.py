import math

n = int(input())

divisors_sum = 0

for i in range(1, int(math.sqrt(n) + 1)):
    if n % i == 0:
        divisors_sum += i
        if i != n // i:
            divisors_sum += n // i


print(divisors_sum)
