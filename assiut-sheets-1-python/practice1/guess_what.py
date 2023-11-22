n, k, a = [int(num) for num in input().split()]

if n * k / a % 1 != 0:
    print("double")
elif n * k / a > 2147483647 or n * k / a < -2147483648:
    print("long long")
else:
    print("int")
