n = int(input())
pascal = []

for i in range(n):
    pascal.append([])
    for j in range(i + 1):
        if i == 0 or j == 0 or j == i:
            pascal[i].append(1)
        else:
            pascal[i].append(pascal[i-1][j-1] + pascal[i-1][j])

for i in range(n):
    print(" ".join([str(x) for x in pascal[i]]))
