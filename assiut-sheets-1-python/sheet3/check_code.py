def isValid(a, b, code):
    if len(code) != a + b + 1:
        return False
    if code[a] != "-":
        return False
    code.pop(a)
    for character in code:
        if not character.isnumeric():
            return False
    return True


a, b = [int(num) for num in input().split()]
code = [character for character in list(input())]

print("Yes") if isValid(a, b, code) else print("No")
