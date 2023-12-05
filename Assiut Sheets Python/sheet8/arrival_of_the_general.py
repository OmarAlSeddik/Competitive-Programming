n = int(input())
nums = [int(num) for num in input().split()]
largest_i = 0
largest = nums[0]
smallest_i = 0
smallest = nums[0]
swap_count = 0

for i in range(n):
    if nums[i] > largest:
        largest = nums[i]
        largest_i = i

while largest_i != 0:
    temp = nums[largest_i]
    nums[largest_i] = nums[largest_i - 1]
    nums[largest_i - 1] = temp
    largest_i -= 1
    swap_count += 1

for i in range(n):
    if nums[i] <= smallest:
        smallest = nums[i]
        smallest_i = i

while smallest_i != n - 1:
    temp = nums[smallest_i]
    nums[smallest_i] = nums[smallest_i + 1]
    nums[smallest_i + 1] = temp
    smallest_i += 1
    swap_count += 1

print(swap_count)
