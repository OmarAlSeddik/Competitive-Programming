string_size = int(input())
string = list(input())
score = 0
i = 0

while i in range(len(string)):
    c = string[i]
    if c == "V":
        score += 5
    elif c == "W":
        score += 2
    elif c == "X":
        i += 1
    elif c == "Y":
        if i != len(string) - 1:
            string.append(string[i+1])
        i += 1
    elif c == "Z":
        if i != len(string) - 1:
            if string[i+1] == "V":
                score = int(score / 5)
                i += 1
            elif string[i+1] == "W":
                score = int(score / 2)
                i += 1
    i += 1

print(score)
