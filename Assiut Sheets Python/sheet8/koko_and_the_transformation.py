a_size, b_size = [int(num) for num in input().split()]
a = [int(num) for num in input().split()]
b = [int(num) for num in input().split()]

sum_a = 0
sum_b = 0

for n in a:
    sum_a += n

for n in b:
    sum_b += n

print("Yes") if sum_a == sum_b else print("No")
