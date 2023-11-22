intervals = input().split()
intervals = [int(interval) for interval in intervals]
interval1 = [intervals[0], intervals[1]]
interval2 = [intervals[2], intervals[3]]

if  interval1[0] > interval2[1] or interval2[0] > interval1[1]:
    print(-1)

else:
    first = max(interval1[0], interval2[0])
    second = min(interval1[1], interval2[1])
    print(f"{first} {second}")