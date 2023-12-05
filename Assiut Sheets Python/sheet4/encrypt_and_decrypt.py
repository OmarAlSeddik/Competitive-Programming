q = int(input())
s = input()
new_string = ""

key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/"
original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"

if q == 1:
    for c in s:
        i = original.find(c)
        new_string += key[i]
else:
    for c in s:
        i = key.find(c)
        new_string += original[i]

print(new_string)
