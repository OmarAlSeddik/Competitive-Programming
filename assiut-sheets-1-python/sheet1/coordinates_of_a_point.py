coordinates = input().split()
coordinates = [float(coordinate) for coordinate in coordinates]

if coordinates[0] > 0 and coordinates[1] > 0:
    print("Q1")

elif coordinates[0] < 0 and coordinates[1] > 0:
    print("Q2")

elif coordinates[0] < 0 and coordinates[1] < 0:
    print("Q3")

elif coordinates[0] > 0 and coordinates[1] < 0:
    print("Q4")

elif coordinates[0] == 0 and coordinates[1] == 0:
    print("Origem")

elif coordinates[1] == 0:
    print("Eixo X")

elif coordinates[0] == 0:
    print("Eixo Y")