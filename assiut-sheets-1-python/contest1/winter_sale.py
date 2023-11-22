discount, price = [int(num) for num in input().split()]
print("%.2f" % (price / ((100 - discount) / 100)))
