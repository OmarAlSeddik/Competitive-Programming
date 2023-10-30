n, m = [int(num) for num in input().split()]

matrix = []

for i in range(n):
    row = list(input())
    matrix.append(row)
    for j in range(m):
        if matrix[i][j] == ".":
            if matrix[i-1][j] != "B" and matrix[i][j-1] != "B":
                matrix[i][j] = "B"
            else:
                matrix[i][j] = "W"

for i in range(n):
    for j in range(m):
        print(matrix[i][j], end="")
    print("")
