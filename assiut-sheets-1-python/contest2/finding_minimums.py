n, k = [int(num) for num in input().split()]
nums = [int(num) for num in input().split()]

output = []
mins = []

for i, num in enumerate(nums):
    if i % k == 0:
        output.append([num])
    else:
        output[-1].append(num)

for array in output:
    mins.append(min(array))

print(" ".join(map(str, mins)))
