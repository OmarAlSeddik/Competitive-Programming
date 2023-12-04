import sys
sys.setrecursionlimit(100001)


def get_factorial(n):
    if n == 0:
        return 1
    return n * get_factorial(n-1)


n = int(input())
digits = len(str(get_factorial(n)))
print("Number of digits of %d! is %d" % (n, digits))
