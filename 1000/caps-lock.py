s = input()
if s[0].islower() and (s[1:].isupper() or len(s) == 1):
    print(s.capitalize())
elif s.isupper():
    print(s.lower())
else: print(s)