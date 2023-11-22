def getFibonacci(num: int):
    if num == 1:
        return 0
    if num == 2 or num == 3:
        return 1
    fibonacci_list = [0, 1]
    for i in range(2, num):
        fibonacci_list.append(fibonacci_list[i-1] + fibonacci_list[i-2])
    return fibonacci_list[-1]


num = int(input())
print(getFibonacci(num))
