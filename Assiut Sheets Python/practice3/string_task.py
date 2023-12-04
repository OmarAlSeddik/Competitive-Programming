s = input().lower()
vowels = ["a", "e", "i", "o", "u", "y"]


def function(letter):
    return False if letter in vowels else True


s = "".join(filter(function, s))

for c in s:
    print("." + c, end="")
