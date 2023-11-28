s = input()
q = int(input())

for i in range(q):
    l, r = [int(n) for n in input().split()]
    print(s[l-1:r].count('a'))
    if i == q - 1:
        print(s[l-1:r].count('a'), end="")
