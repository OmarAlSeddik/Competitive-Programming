a_count, b_count = [int(num) for num in input().split()]
a = [int(num) for num in input().split()]
b = [int(num) for num in input().split()]
b_index = 0

for num in a:
    if b[b_index] == num:
        b_index += 1
        if b_index == len(b):
            break

print("YES") if b_index == len(b) else print("NO")
