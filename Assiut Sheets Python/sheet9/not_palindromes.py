s = input()

if s != s[::-1]:
    print(len(s))

else:
    single_letter = len(set(s)) == 1

    if single_letter:
        print(0)

    else:
        print(len(s) - 1)
