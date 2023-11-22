def is_wonderful_number(num) -> bool:
    if num % 2:
        binary = bin(num)[2:]
        reverse = binary[::-1]
        if binary == reverse:
            return True
    return False


num = int(input())
print("YES") if is_wonderful_number(num) else print("NO")
