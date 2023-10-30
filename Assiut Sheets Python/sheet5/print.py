def print_nums(num):
    for i in range(1, num + 1):
        if i == num:
            print(i)
        else:
            print(i, end=" ")


num = int(input())
print_nums(num)
