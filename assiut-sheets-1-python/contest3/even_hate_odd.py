t = int(input())

for _ in range(t):
    n = int(input())
    a = [int(num) for num in input().split()]
    if len(a) % 2:
        print(-1)
    else:
        even_count = 0
        odd_count = 0
        for x in a:
            if x % 2:
                odd_count += 1
            else:
                even_count += 1
        print(int((max(even_count, odd_count) - min(even_count, odd_count)) / 2))
