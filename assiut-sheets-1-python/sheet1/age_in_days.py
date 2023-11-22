userInput = int(input())

years = int(userInput / 365)
userInput = userInput - years * 365
months = int(userInput / 30)
userInput = userInput - months * 30
days = userInput

print(f"{years} years")
print(f"{months} months")
print(f"{days} days")
