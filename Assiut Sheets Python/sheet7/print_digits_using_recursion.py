def print_digits(t):
    if t == 0:
        return
    num = " ".join(list(input()))
    print(num)
    return print_digits(t-1)


t = int(input())
print_digits(t)
