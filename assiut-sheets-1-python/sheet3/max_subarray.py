test_count = int(input())

for test in range(test_count):
    num_count = int(input())
    nums = [int(num) for num in input().split()]
    length = 1
    while (length <= len(nums)):
        for i in range(len(nums) - (length - 1)):
            print(max(nums[i:i+length]), end=" ")
        length += 1
    print()
