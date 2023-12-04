n = int(input())
a = [num for num in input().split()]

l = 0
r = len(a) - 1
on_l = True

x = []

while (l <= r):
    if on_l:
        x.append(a[l])
        l += 1
        on_l = False
    else:
        x.append(a[r])
        r -= 1
        on_l = True

print(" ".join(x))
