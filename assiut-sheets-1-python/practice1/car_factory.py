from typing import MutableSequence

t = int(input())

answers: MutableSequence[int] = []

for x in range(t):
    n, k = [int(num) for num in input().split()]
    answers.append(n + k - 1)

for answer in answers:
    print(answer)
