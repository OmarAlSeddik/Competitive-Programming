def print_recursion(n):
    if n == 0:
        return
    print("I love Recursion")
    return print_recursion(n-1)


n = int(input())
print_recursion(n)
