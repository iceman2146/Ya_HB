name = input()
price = input()
weight = input()
money = input()
cost = float(price) * float(weight)

print('Чек')
print(name + ' - ' + weight + 'кг - ' + price + 'руб/кг') 
print('Итого: ' + str(int(cost)) + 'руб')
print('Внесено: ' + str(int(money)) + 'руб')
print('Сдача: ' + str(int(float(money) - cost)) + 'руб') 