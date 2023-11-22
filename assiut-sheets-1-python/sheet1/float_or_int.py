num = float(input())
fraction = num % 1

print(f"int {int(num)}") if fraction == 0 else print(f"float {int(num)} {fraction:.3f}")