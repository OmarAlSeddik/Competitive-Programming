string = input().lower()
egypt_counter = [0] * 5

for c in string:
    if c == "e":
        egypt_counter[0] += 1
    elif c == "g":
        egypt_counter[1] += 1
    elif c == "y":
        egypt_counter[2] += 1
    elif c == "p":
        egypt_counter[3] += 1
    elif c == "t":
        egypt_counter[4] += 1

print(min(egypt_counter))
