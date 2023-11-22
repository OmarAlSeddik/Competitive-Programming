num = float(input())

if num < 0 or num > 100:
    print("Out of Intervals")

elif num > 75:
    print("Interval (75,100]")

elif num > 50:
    print("Interval (50,75]")

elif num > 25:
    print("Interval (25,50]")

else: print("Interval [0,25]")