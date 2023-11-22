numCount = int(input())
nums = []

for i in range(numCount):
    nums.append(input())

for i in range(numCount):
    print(" ".join(list(nums[i][::-1])))