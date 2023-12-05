n = int(input())

row = n // 4
col = n % 4 if row % 2 == 0 else 3 - n % 4

print(f"{row} {col}")
