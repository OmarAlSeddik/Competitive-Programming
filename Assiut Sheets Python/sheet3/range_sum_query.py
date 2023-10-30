def query_sum(N, A, queries):
    prefix_sum = [0] * (N+1)
    for i in range(1, N+1):
        prefix_sum[i] = prefix_sum[i-1] + A[i-1]

    results = []
    for query in queries:
        L, R = query
        result = prefix_sum[R] - prefix_sum[L-1]
        results.append(result)

    return results


N, Q = map(int, input().split())
A = list(map(int, input().split()))
queries = []
for _ in range(Q):
    L, R = map(int, input().split())
    queries.append((L, R))

results = query_sum(N, A, queries)
for result in results:
    print(result)
