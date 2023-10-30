def x_neighbors(x, y, array, n, m):
    for i in range(x - 1, x + 2):
        for j in range(y - 1, y + 2):
            if i < n and j < m:
                if array[i][j] != "x" and not (i == x and j == y):
                    return False
    return True


n, m = [int(num) for num in input().split()]
array = []

for _ in range(n):
    symbols = list(input())
    array.append(symbols)

x, y = [int(num) - 1 for num in input().split()]

print("yes") if x_neighbors(x, y, array, n, m) else print("no")
