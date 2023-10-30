def count_non_decreasing_subarrays(arr):
    count = 0
    n = len(arr)
    for i in range(n):
        for j in range(i, n):
            is_non_decreasing = True
            for k in range(i, j):
                if arr[k] > arr[k + 1]:
                    is_non_decreasing = False
                    break
            if is_non_decreasing:
                count += 1
    return count


T = int(input())

for _ in range(T):
    N = int(input())
    arr = list(map(int, input().split()))
    result = count_non_decreasing_subarrays(arr)
    print(result)
