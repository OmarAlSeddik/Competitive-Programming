def getValue(num):
    binary = bin(num)[2:]
    new_binary = ""
    for i in range(len(binary)):
        if binary[i] == "1":
            new_binary += "1"
    return int(new_binary, 2)
    

num_count = int(input())
nums = []

for i in range(num_count):
    nums.append(int(input()))

for i in range(num_count):
    print(getValue(nums[i]))