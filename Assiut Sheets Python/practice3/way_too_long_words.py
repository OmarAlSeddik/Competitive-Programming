t = int(input())

ans = []

for _ in range(t):
    s = input()
    if len(s) > 10:
        ans.append(s[0] + str(len(s) - 2) + s[-1])
    else:
        ans.append(s)

for i in range(t):
    print(ans[i])
