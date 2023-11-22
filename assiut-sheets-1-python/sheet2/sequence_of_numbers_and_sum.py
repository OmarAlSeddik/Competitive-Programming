while True:
    nums = [int(num) for num in input().split()]
    if nums[0] < 1 or nums[1] < 1:
        break
    sum = 0
    for i in range(min(nums), max(nums) + 1):
        print(i, end=" ")
        sum += i
    print(f"sum ={sum}")