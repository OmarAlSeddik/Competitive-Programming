string = input()
result = []
current = []
l_count = 0
r_count = 0

for c in string:
    if c == "L":
        l_count += 1
        current.append(c)
    elif c == "R":
        r_count += 1
        current.append(c)
    if l_count == r_count:
        result.append(current)
        current = []

print(len(result))
[print("".join(output)) for output in result]
