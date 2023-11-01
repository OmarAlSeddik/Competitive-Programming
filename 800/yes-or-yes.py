t = int(input())
ans = []
for i in range(t):
    x = input()
    if x.lower() == "yes":
        ans.append("YES")
    else:
        ans.append("NO")

for i in range(t):
    if (i == t-1):
        print(ans[i], end="")
    else:
        print(ans[i])
