s = input().lower()
vowels = ["a", "e", "i", "o", "u"]


def get_count(s, count):
    if not s:
        return count
    if s[-1] in vowels:
        count += 1
    s = s[:-1]
    return get_count(s, count)


print(get_count(s, 0))
