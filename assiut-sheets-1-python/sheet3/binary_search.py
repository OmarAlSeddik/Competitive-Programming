from collections import defaultdict


N, Q = [int(num) for num in input().split()]
A = [int(num) for num in input().split()]
queries = []

hash_table = defaultdict(bool)

for num in A:
    hash_table[num] = True

for _ in range(Q):
    num = int(input())
    queries.append(num)

for query in queries:
    print("found") if hash_table[query] else print("not found")
