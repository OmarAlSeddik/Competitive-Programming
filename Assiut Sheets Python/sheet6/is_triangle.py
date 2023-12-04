a, b, c = sorted([int(n) for n in input().split()])

is_valid = a + b > c and a + c > b and b + c > a

if is_valid:
    print("Valid")
    s = (a + b + c) / 2
    answer = (s * (s - a) * (s - b) * (s - c)) ** 0.5
    print(answer)
else:
    print("Invalid")
