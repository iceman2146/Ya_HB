q = int(input())
w = int(input())
e = ((q % 10) + (w % 10)) % 10
r = ((q // 10 % 10) + (w // 10 % 10)) % 10
t = ((q // 100) + (w // 100)) % 10
print(f'{t}{r}{e}')