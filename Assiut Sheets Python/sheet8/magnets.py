n = int(input())
magnets = []

for _ in range(n):
    magnet = input()
    if not magnets:
        magnets.append([magnet])
    else:
        if magnet == magnets[-1][-1]:
            magnets[-1].append(magnet)
        else:
            magnets.append([magnet])

print(len(magnets))
