def is_even(n):
    return n % 2 == 0


a, b = [int(n) for n in input().split()]

first = min(a, b)
final = max(a, b)

first_even = 0
final_even = 0
first_odd = 0
final_odd = 0

if is_even(first):
    first_even = first
    first_odd = first + 1

else:
    first_even = first + 1
    first_odd = first

if is_even(final):
    final_even = final
    final_odd = final - 1

else:
    final_even = final - 1
    final_odd = final

even_count = ((final_even - first_even) // 2) + 1
odd_count = ((final_odd - first_odd) // 2) + 1

sum_even = int((even_count / 2) * (first_even + final_even))
sum_odd = int((odd_count / 2) * (first_odd + final_odd))

print(sum_even + sum_odd)
print(sum_even)
print(sum_odd)
