n_to_c = {0: "q", 1: "w", 2: "e", 3: "r", 4: "t", 5: "y", 6: "u", 7: "i", 8: "o", 9: "p",
          10: "a", 11: "s", 12: "d", 13: "f", 14: "g", 15: "h", 16: "j", 17: "k", 18: "l", 19: ";",
          20: "z", 21: "x", 22: "c", 23: "v", 24: "b", 25: "n", 26: "m", 27: ",", 28: ".", 29: "/"}

c_to_n = {v: k for k, v in n_to_c.items()}

direction = input()
text = list(input())

for i in range(len(text)):
    if direction == "L":
        if text[i] != "p" or text[i] != ";" or text[i] != "/":
            n = c_to_n[text[i]]
            text[i] = n_to_c[n + 1]
    else:
        if text[i] != "q" or text[i] != "a" or text[i] != "z":
            n = c_to_n[text[i]]
            text[i] = n_to_c[n - 1]

print("".join(text))
