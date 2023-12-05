t = int(input())

for _ in range(t):
    w, y = [int(n) for n in input().split()]
    if w == y:
        print("Square")
    else:
        print("Rectangle")
