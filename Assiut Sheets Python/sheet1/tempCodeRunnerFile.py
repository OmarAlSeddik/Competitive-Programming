nums = [int(num) for num in input().split()]
val1 = nums[0] ** nums[1]
val2 = nums[2] ** nums[3]

print("YES" if val1 > val2 else "NO")