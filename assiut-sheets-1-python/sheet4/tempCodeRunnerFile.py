string1 = input()
string2 = input()

print(f"{len(string1)} {len(string2)}")
print(f"{string1}{string2}")

temp = string1[0]
string1[0] = string2[0]
string2[0] = temp
print(f"{string1} {string2}")
