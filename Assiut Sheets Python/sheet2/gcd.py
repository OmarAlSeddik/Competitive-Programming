nums = [int(num) for num in input().split()]
gcd = 1

for i in range(2, min(nums) + 1):
    if nums[0] % i == 0 and nums[1] % i == 0:
        gcd = i

print(gcd)