stones = list(input())
instructions = list(input())

pos = 1

for instruction in instructions:
    if instruction == stones[pos - 1]:
        pos += 1

print(pos)
