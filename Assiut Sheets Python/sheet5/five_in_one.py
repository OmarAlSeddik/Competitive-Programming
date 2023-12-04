def is_prime(num) -> bool:
    if num == 1:
        return False
    i = 2
    while i * i <= num:
        if num % i == 0:
            return False
        i += 1
    return True


def is_palindrome(num) -> bool:
    return str(num) == str(num)[::-1]


def max_divisors(nums) -> int:
    max_count = 0
    max_num = 0
    for num in nums:
        count = 1
        i = 1
        while i * i <= num:
            if num % i == 0:
                count += 1
            i += 1
        if count >= max_count:
            max_count = count
            max_num = num
    return max_num


def five_in_one(nums):
    max_num = max(nums)
    min_num = min(nums)
    prime_count = 0
    palindrome_count = 0
    for num in nums:
        if is_prime(num):
            prime_count += 1
        if is_palindrome(num):
            palindrome_count += 1
    max_divs = max_divisors(nums)
    print(f"The maximum number : {max_num}")
    print(f"The minimum number : {min_num}")
    print(f"The number of prime numbers : {prime_count}")
    print(f"The number of palindrome numbers : {palindrome_count}")
    print(f"The number that has the maximum number of divisors : {max_divs}")


n = int(input())
nums = [int(num) for num in input().split()]
five_in_one(nums)
