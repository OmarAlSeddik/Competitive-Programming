n = int(input())
nums = [int(num) for num in input().split()]

l = 0
r = n - 1
sum1 = 0
sum2 = 0

for i in range(n):
    if i % 2 == 0:
        if nums[l] >= nums[r]:
            sum1 += nums[l]
            l += 1
        else:
            sum1 += nums[r]
            r -= 1
    else:
        if nums[l] >= nums[r]:
            sum2 += nums[l]
            l += 1
        else:
            sum2 += nums[r]
            r -= 1

print(f"{sum1} {sum2}")
