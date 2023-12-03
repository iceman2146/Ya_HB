import math

a = float(input())
b = float(input())
c = float(input())
if a == 0.0:
    print("Infinite solutions")
    exit()
D = b * b - 4 * a * c

if D < 0:
    print("No solution")
    exit()
elif D == 0:
    print(f"{-1.0*(b/(2*a))}")
    exit()
else:
    x1 = -1.0 * ((b + math.sqrt(D)) / (2 * a))
    x2 = -1.0 * ((b - math.sqrt(D)) / (2 * a))
    # if x1 > x2:
    #    print(f"{x1:.2f} {x2:.2f}")
    #    exit()
    # else:
    #    print(f"{x2:.2f} {x1:.2f}")
    print(f"{x1:.2f}" + " " + f"{x2:.2f}")
