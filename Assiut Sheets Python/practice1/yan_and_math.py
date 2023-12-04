s = input()

odd_count = 0
even_count = 0

for n in s:
    if int(n) % 2:
        odd_count += 1
    else:
        even_count += 1

print("Even : %d" % even_count)
print("Odd : %d" % odd_count)
