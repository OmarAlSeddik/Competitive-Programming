s = list(input())
numbers = []

for i in range(0, len(s), 2):
    numbers.append(s[i])

numbers.sort(reverse=True)
output = []

for i in range(len(s)):
    if i % 2 == 0:
        output.append(numbers[-1])
        numbers.pop()
    else:
        output.append("+")

print("".join(output))
