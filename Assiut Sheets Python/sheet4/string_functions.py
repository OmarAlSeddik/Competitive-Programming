n, q = [int(num) for num in input().split()]
s = input()

answers = []

for _ in range(q):
    query = input().split()
    if query[0] == "pop_back":
        s = s[:-1]

    elif query[0] == "front":
        answers.append(s[0])

    elif query[0] == "back":
        answers.append(s[-1])

    elif query[0] == "sort":
        l = int(query[1]) - 1
        r = int(query[2]) - 1
        s = s[:l] + \
            "".join(sorted(s[l:r+1])) + s[r+1:]

    elif query[0] == "reverse":
        l = int(query[1]) - 1
        r = int(query[2]) - 1
        s = s[:l] + \
            s[l:r+1][::-1] + s[r+1:]

    elif query[0] == "print":
        pos = int(query[1]) - 1
        answers.append(s[pos])

    elif query[0] == "substr":
        l = int(query[1]) - 1
        r = int(query[2]) - 1
        answers.append(s[l:r+1])

    elif query[0] == "push_back":
        s += query[1]

for answer in answers:
    print(answer)
