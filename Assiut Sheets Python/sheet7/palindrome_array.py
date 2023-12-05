def is_palindrome(nums, i, n):
    if i >= n:
        return True
    if nums[i] != nums[n]:
        return False
    return is_palindrome(nums, i + 1, n - 1)


n = int(input()) - 1
nums = input().split()

print("YES") if is_palindrome(nums, 0, n) else print("NO")
