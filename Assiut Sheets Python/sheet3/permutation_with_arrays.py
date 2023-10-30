from collections import defaultdict


def is_permutation(nums_a, nums_b):
    hash = defaultdict(int)
    for num in nums_a:
        hash[num] += 1
    for num in nums_b:
        if hash[num] == 0:
            return False
        hash[num] -= 1
    return True


num_count = int(input())
nums_a = [int(num) for num in input().split()]
nums_b = [int(num) for num in input().split()]

print("yes") if is_permutation(nums_a, nums_b) else print("no")
