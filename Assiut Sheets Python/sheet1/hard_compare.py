import math

A, B, C, D = map(int, input().split())

power1 = B * math.log(A)
power2 = D * math.log(C)

if power1 > power2:
    print("YES")
else:
    print("NO")