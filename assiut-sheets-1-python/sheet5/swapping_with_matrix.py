def swap_matrix(matrix, x, y):
    temp = matrix[x-1]
    matrix[x-1] = matrix[y-1]
    matrix[y-1] = temp
    for row in matrix:
        temp = row[x-1]
        row[x-1] = row[y-1]
        row[y-1] = temp
    return matrix


n, x, y = [int(num) for num in input().split()]
matrix = []

for _ in range(n):
    row = [num for num in input().split()]
    matrix.append(row)

matrix = swap_matrix(matrix, x, y)

for row in matrix:
    print(" ".join(row))
