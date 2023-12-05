test_count = int(input())
outputs = []

for _ in range(test_count):
    string1, string2 = [string for string in input().split()]
    larger_string = string1 if len(string1) > len(string2) else string2
    smaller_string = string1 if larger_string == string2 else string2
    diff = len(larger_string) - len(smaller_string)
    pointer = 0
    output = ""

    while pointer < len(string1) and pointer < len(string2):
        output += string1[pointer]
        output += string2[pointer]
        pointer += 1

    if diff > 0:
        output += larger_string[-diff:]

    outputs.append(output)

[print(output) for output in outputs]
