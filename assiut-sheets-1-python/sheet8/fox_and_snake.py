n, m = [int(num) for num in input().split()]

is_right = True

for i in range(n):
    if i % 2 == 0:
        for j in range(m):
            if j == m - 1:
                print("#")
            else:
                print("#", end="")
    else:
        if is_right:
            for j in range(m):
                if j == m - 1:
                    print("#")
                else:
                    print(".", end="")
            is_right = False
        else:
            for j in range(m):
                if j == 0:
                    print("#", end="")
                elif j == m - 1:
                    print(".")
                else:
                    print(".", end="")
            is_right = True
