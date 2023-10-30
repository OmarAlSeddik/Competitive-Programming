def print_from_1_to_n(n):
    if n == 0:
        return
    print_from_1_to_n(n-1)
    print(n)
    return n


n = int(input())
print_from_1_to_n(n)
