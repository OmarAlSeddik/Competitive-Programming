a, b, q = [int(n) for n in input().split()]

result = a if q == 1 else b

for i in range(3, q + 1):
    result = a ^ b
    a = b
    b = result

print(result)
