test_count = int(input())
outputs = []

for _ in range(test_count):
    string = input()
    outputs.append("Bad") if string.find("101") == -1 \
        and string.find("010") == -1 else outputs.append("Good")

[print(output) for output in outputs]
