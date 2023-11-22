num = input().lstrip("0")
reversed = num[::-1].lstrip("0")
print(reversed)
print("YES") if num == reversed else print("NO")