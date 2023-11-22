def strcmp(str1, str2) -> int:
    i = 0
    while i < len(str1) and i < len(str2):
        if str1[i] < str2[i]:
            return -1
        elif str1[i] > str2[i]:
            return 1
        i += 1
    if len(str1) < len(str2):
        return -1
    elif len(str1) > len(str2):
        return 1
    else:
        return 0


s = input()
smallest = []

for i in range(1, len(s)):
    s1 = "".join(sorted(s[:i]))
    s2 = "".join(sorted(s[i:]))
    result = s1 + s2
    if i == 1:
        smallest = result
    else:
        if strcmp(smallest, result) == 1:
            smallest = result

print(smallest)
