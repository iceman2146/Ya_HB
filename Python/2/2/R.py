a = int(input())
b = int(input())
c = int(input())
if (
    (c**2 == b**2 + a**2)
    or (b**2 == c**2 + a**2)
    or (a**2 == c**2 + b**2)
):
    print("100%")
elif (
    (c**2 > b**2 + a**2)
    or (b**2 > c**2 + a**2)
    or (a**2 > c**2 + b**2)
):
    print("велика")
else:
    print("крайне мала")
    