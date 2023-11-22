n = int(input())
events = [int(num) for num in input().split()]

cops = 0
untreated = 0

for event in events:
    if event > 0:
        cops += event
    else:
        if cops >= abs(event):
            cops += event
        else:
            untreated += 1

print(untreated)
