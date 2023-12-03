Petya = int(input())
Vasya = int(input())
Tolya = int(input())


first = max(Petya, Vasya, Tolya)
third = min(Petya, Vasya, Tolya)
second = Petya + Vasya + Tolya - first - third

if first == Petya:
    First_place = "Петя"
elif first == Vasya:
    First_place = "Вася"
else:
    First_place = "Толя"

if second == Petya:
    Second_place = "Петя"
elif second == Vasya:
    Second_place = "Вася"
else:
    Second_place = "Толя"

if third == Petya:
    Third_place = "Петя"
elif third == Vasya:
    Third_place = "Вася"
else:
    Third_place = "Толя"


print(f"{First_place: ^24}")
print(f'{Second_place: ^8}{" ": ^16}')
print(f'{" ": ^16}{Third_place: ^8}')
print(f'{"II": ^8}{"I": ^8}{"III": ^8}')
