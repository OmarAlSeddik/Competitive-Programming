def print_from_n_to_1(n):
    if n == 1:
        print(n)
        return n
    print(n, end=" ")
    print_from_n_to_1(n-1)
    return n


n = int(input())
print_from_n_to_1(n)
