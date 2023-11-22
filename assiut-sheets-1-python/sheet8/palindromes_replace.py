def get_palindrome(s):
    for i in range(len(s)):
        if s[i] == "?":
            if (s[-i-1] == "?"):
                s[i] = "a"
                s[-i-1] = "a"
            else:
                s[i] = s[-i-1]
        elif s[-i-1] == "?":
            s[-i-1] = s[i]
        elif s[i] != s[-i-1]:
            return False
    return s


s = list(input())
palindrome = get_palindrome(s)
print("".join(palindrome)) if palindrome else print(-1)
