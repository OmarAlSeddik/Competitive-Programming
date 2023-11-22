n, m = [int(num) for num in input().split()]
array = []

for _ in range(n):
    nums = [int(num) for num in input().split()]
    array.append(nums[::-1])

for i in range(n):
    for j in range(m):
        print(array[i][j], end=" ")
    print()
