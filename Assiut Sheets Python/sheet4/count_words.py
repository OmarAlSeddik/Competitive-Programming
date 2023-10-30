def RemoveSymbols(string):
    symbols = ["!", ".", "?", ","]
    s = "".join(c for c in string if c not in symbols)
    return s.strip()


input_string = input()
word_list = [RemoveSymbols(word)
             for word in input_string.split() if RemoveSymbols(word)]

print(len(word_list))
