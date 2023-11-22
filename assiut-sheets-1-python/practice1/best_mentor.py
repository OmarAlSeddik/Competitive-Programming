s = input()
is_palindrome = s == s[::-1]
n = int(s)

sum_of_digits = 0
for digit in s:
    sum_of_digits += int(digit)

if is_palindrome and n % sum_of_digits == 0:
    print("Best mentor.")

elif is_palindrome or n % sum_of_digits == 0:
    print("He's good.")

else:
    print("He'll be fired.")
