l, r, m = [int(num) for num in input().split()]
product = 1

for i in range(l, r + 1):
    product *= i
    product %= m

print(product)
