symbol = input()
num_count = int(input())
nums = [int(num) for num in input().split()]

for i in range(num_count):
    for j in range(nums[i]):
        print(symbol, end="")
    print("")