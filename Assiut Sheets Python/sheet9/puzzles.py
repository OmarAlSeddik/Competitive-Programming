n, m = [int(num) for num in input().split()]
puzzle_pieces = [int(num) for num in input().split()]

puzzle_pieces.sort()

min_diff = float('inf')

for i in range(m - n + 1):
    current_diff = puzzle_pieces[i + n - 1] - puzzle_pieces[i]
    min_diff = min(min_diff, current_diff)

print(min_diff)
