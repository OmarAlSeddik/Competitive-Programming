n = int(input())
nums = [int(num) for num in input().split()]
reversed_nums = nums[::-1]

print("YES") if nums == reversed_nums else print("NO")