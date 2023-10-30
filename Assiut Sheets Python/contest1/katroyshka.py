eyes, mouths, bodies = [int(num) for num in input().split()]

count1 = min(eyes, mouths, bodies)
eyes -= count1
bodies -= count1
count2 = min(eyes // 2, bodies)

print(count1 + count2)
