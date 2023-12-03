password = int(input())
digits = []

# Используем цикл while, пока число больше 0
while password > 0:
    # Получаем последний разряд числа
    digit = password % 10

    # Добавляем разряд в начало списка
    digits.insert(0, digit)

    # Обновляем число, удаляя последний разряд
    password = password // 10

# Выводим список разрядов
part_1 = digits[2] + digits[1]
part_2 = digits[1] + digits[0]

if part_1 > part_2:
    print(f"{str(part_1)}{str(part_2)}")
else:
    print(f"{str(part_2)}{str(part_1)}")
