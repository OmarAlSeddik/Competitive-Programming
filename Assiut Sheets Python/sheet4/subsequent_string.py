string = input()
hello = "hello"
i = 0
is_subsequence = False

for character in string:
    if character == hello[i]:
        i += 1
        if i == len(hello):
            is_subsequence = True
            break

print("YES") if is_subsequence else print("NO")
