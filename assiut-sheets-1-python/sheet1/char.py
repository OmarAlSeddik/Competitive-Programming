char = input()
ascii = ord(char)

print(chr(ascii - 32)) if ascii > 96 else print(chr(ascii + 32))