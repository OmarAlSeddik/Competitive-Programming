n = int(input())
list1 = []
list2 = []
descending = True

for i in range(n):
    n1, n2 = [int(num) for num in input().split()]
    if i and n1 > list1[-1]:
        descending = False
    list1.append(n1)
    list2.append(n2)

if list1 != list2:
    print("rated")

elif list1 == list2 and not descending:
    print("unrated")

else:
    print("maybe")
