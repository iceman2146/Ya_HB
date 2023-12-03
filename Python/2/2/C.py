Petya = int(input())
Vasya = int(input())
Tolik = int(input())
result = max(Vasya, Petya, Tolik)
if result == Vasya:
    print(f"Вася")
elif result == Petya:
    print(f"Петя")
elif result == Tolik:
    print(f"Толя")
