n, f = input().split(".")
if n[-1] == "9":
    print("GOTO Vasilisa.")
else:
    n = int(n)
    print(n if int(f[0]) < 5 else n+1)
