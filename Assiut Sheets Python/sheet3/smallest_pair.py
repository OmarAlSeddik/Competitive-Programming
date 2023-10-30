test_count = int(input())

for test in range(test_count):
    num_count = int(input())
    nums = [int(num) for num in input().split()]
    smallest_sum = nums[0] + nums[1] + 2 - 1
    for i, num1 in enumerate(nums):
        for j, num2 in enumerate(nums):
            if i < j:
                sum = num1 + num2 + (j + 1) - (i + 1)
                if sum < smallest_sum:
                    smallest_sum = sum
    print(smallest_sum)