string = input().split()
for i, word in enumerate(string):
    print(word[::-1], end="")
    if i != len(string) - 1:
        print(" ", end="")
