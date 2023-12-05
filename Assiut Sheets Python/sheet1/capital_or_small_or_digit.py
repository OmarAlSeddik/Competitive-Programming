ascii = ord(input(""))

if ascii > 64:
    print("ALPHA")
    if ascii > 96: print("IS SMALL")
    else: print("IS CAPITAL")

else: print("IS DIGIT")