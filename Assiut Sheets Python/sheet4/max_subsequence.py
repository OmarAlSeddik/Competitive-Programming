string_size = int(input())
string = input()
maximum = 1

for i in range(1, string_size):
    if string[i] != string[i-1]:
        maximum += 1

print(maximum)
