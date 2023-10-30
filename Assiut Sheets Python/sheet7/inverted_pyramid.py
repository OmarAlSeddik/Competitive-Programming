def pyramid(n, row):
    if not n:
        return
    else:
        for _ in range(row):
            print(" ", end="")
        for _ in range(n * 2 - 1):
            print("*", end="")
        if n != 1:
            print("")
    return pyramid(n - 1, row + 1)


n = int(input())
pyramid(n, 0)
