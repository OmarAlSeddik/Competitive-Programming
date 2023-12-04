string = input()
counter = [0] * 26

for letter in string:
    counter[ord(letter) - 97] += 1

for i in range(26):
    if counter[i] > 0:
        print(f"{chr(i + 97)} : {counter[i]}")
