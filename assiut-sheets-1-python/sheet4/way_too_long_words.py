test_count = int(input())
strings = []

for _ in range(test_count):
    string = input()
    if (len(string) > 10):
        strings.append(string[:1] + str(len(string) - 2) + string[-1:])
    else:
        strings.append(string)

for i in range(len(strings)):
    print(strings[i])
