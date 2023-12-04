def average(nums, nums_count):
    sum = 0
    for num in nums:
        sum += num
    return sum / nums_count


num_count = int(input())
nums = [float(num) for num in input().split()]

print("%.7f" % average(nums, num_count))
