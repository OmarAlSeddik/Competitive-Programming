def summation_of_numbers(A, B):
    return (B * (B + 1) - A * (A - 1)) // 2


def summation_of_even_numbers(A, B):
    if A % 2 == 1:
        A += 1
    if B % 2 == 1:
        B -= 1
    return summation_of_numbers(A // 2, B // 2)


def summation_of_odd_numbers(A, B):
    if A % 2 == 0:
        A += 1
    if B % 2 == 0:
        B -= 1
    return summation_of_numbers((A - 1) // 2, (B - 1) // 2)


# Input
A, B = [int(n) for n in input().split()]

# Output
print(summation_of_numbers(A, B))
print(summation_of_even_numbers(A, B))
print(summation_of_odd_numbers(A, B))
