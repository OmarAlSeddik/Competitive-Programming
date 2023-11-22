def n_times(count, character) -> str:
    return " ".join([character for _ in range(count)])


test_count = int(input())

for _ in range(test_count):
    count, character = [string for string in input().split()]
    count = int(count)
    print(n_times(count, character))
