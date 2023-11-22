def calculate_cost(S, letter_costs):
    total_cost = 0
    for i in range(1, len(S) - 1):
        if S[i] == '?':
            best_cost = float('inf')
            best_letter = ''
            for letter in range(ord('a'), ord('z') + 1):
                if letter != ord('z'):
                    current_cost = abs(letter_costs[letter - ord('a')] - letter_costs[ord(S[i - 1]) - ord('a')]) + \
                        abs(letter_costs[letter - ord('a')] -
                            letter_costs[ord(S[i + 1]) - ord('a')])
                else:
                    pass
                if current_cost < best_cost:
                    best_cost = current_cost
                    best_letter = chr(letter)
            total_cost += best_cost
            S = S[:i] + best_letter + S[i + 1:]
    return total_cost, S


S = input().strip()
letter_costs = list(map(int, input().strip().split()))

min_cost, modified_string = calculate_cost(S, letter_costs)

print(min_cost)
print(modified_string)
