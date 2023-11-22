def is_successful_semester(n, m, grades):
    required_success_count = -(-n * m // 1)
    successful_courses = sum(grade >= 50 for grade in grades)
    return successful_courses >= required_success_count


def main():
    with open('Files.in', 'r') as input_file, open('Files.out', 'w') as output_file:
        tests = int(input_file.readline())
        for _ in range(tests):
            n, m = [float(x) for x in input_file.readline().split()]
            grades = [int(x) for x in input_file.readline().split()]
            result = "YES" if is_successful_semester(n, m, grades) else "NO"
            output_file.write(f"{result}\n")


if __name__ == "__main__":
    main()
