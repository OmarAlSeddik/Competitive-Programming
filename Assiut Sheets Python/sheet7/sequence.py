def get_sequence_length(n, c=1):
    if n == 1:
        return c
    if n % 2:
        return get_sequence_length(n * 3 + 1, c + 1)
    return get_sequence_length(n / 2, c + 1)


n = int(input())
print(get_sequence_length(n))
