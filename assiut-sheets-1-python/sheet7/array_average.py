def get_avg(a, n, curr_sum=0):
    if not a:
        return curr_sum / n
    curr_sum += a.pop()
    return get_avg(a, n, curr_sum)


n = int(input())
a = [int(num) for num in input().split()]

print("%.6f" % get_avg(a, n))
