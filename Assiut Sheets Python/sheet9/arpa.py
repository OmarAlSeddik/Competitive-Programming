# Google Modular Exponentiation

def last_digit_of_power(n):
    if n == 0:
        return 1

    base = 1378
    result = 1
    while n > 0:
        if n % 2 == 1:
            result = (result * base) % 10
        base = (base * base) % 10
        n //= 2

    return result


n = int(input())

print(last_digit_of_power(n))
