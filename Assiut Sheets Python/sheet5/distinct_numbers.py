def count_distinct_numbers(array):
    distinct_numbers = set(array)
    return len(distinct_numbers)


N = int(input())
numbers = list(map(int, input().split()))
distinct_count = count_distinct_numbers(numbers)
print(distinct_count)
