a = float(input())
b = float(input())
c = float(input())
d = b**2 - 4 * a * c
if a == 0:
    if b == 0 and c == 0:
        print("Infinite solutions")
    elif c != 0 and b == 0:
        print("No solution")
    elif b != 0 and c == 0:
        x1 = 0
        print(f"{x1:.2f}")
    elif b != 0 and c != 0:
        x1 = -c / b
        print(f"{x1:.2f}")
elif a != 0:
    if d < 0:
        print("No solution")
    if d == 0:
        x1 = -b / (2 * a)
        print(f"{x1:.2f}")
    if d > 0:
        x1 = (-b + d**0.5) / (2 * a)
        x2 = (-b - d**0.5) / (2 * a)
        if x1 > x2:
            print(f"{x2:.2f} {x1:.2f}")
        else:
            print(f"{x1:.2f} {x2:.2f}")
