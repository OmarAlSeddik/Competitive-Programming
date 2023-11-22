def min_and_max(nums) -> str:
    return f"{min(nums)} {max(nums)}"


num_count = int(input())
nums = [int(num) for num in input().split()]
print(min_and_max(nums))
