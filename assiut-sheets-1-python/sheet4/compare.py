string1 = input()
string2 = input()
shortest_len = min(len(string1), len(string2))
printed = False

for i in range(shortest_len):
    if ord(string1[i]) < ord(string2[i]):
        print(string1)
        printed = True
        break
    elif ord(string2[i]) < ord(string1[i]):
        print(string2)
        printed = True
        break


if not printed:
    print(string1) if len(string1) < len(string2) else print(string2)
