def get_max():
    pass


n, w = [int(num) for num in input().split()]
weights = []
values = []

for _ in range(n):
    x, v = [int(num) for num in input().split()]
    weights.append(x)
    values.append(v)
