def sum_two_numbers(A, B):
    return A + B

def main():
    # Read input from Files.in
    with open("Files.in", "r") as input_file:
        line = input_file.readline()
        A, B = map(int, line.strip().split())

    # Calculate the sum
    result = sum_two_numbers(A, B)

    # Write output to Files.out
    with open("Files.out", "w") as output_file:
        output_file.write(str(result))

if __name__ == "__main__":
    main()
