n = int(input())
s = list(input())
is_sorted = False

while not is_sorted:
    is_sorted = True
    for i in range(len(s) - 1):
        if ord(s[i]) > ord(s[i+1]):
            temp = s[i]
            s[i] = s[i+1]
            s[i+1] = temp
            is_sorted = False

print("".join(s))
