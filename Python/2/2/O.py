var_1 = int(input())
var_2 = int(input())

var_1_1 = var_1 // 10
var_1_2 = var_1 % 10
var_2_1 = var_2 // 10
var_2_2 = var_2 % 10

summa = var_1_1 + var_1_2 + var_2_1 + var_2_2
min = min(var_1_1, var_1_2, var_2_1, var_2_2)
max = max(var_1_1, var_1_2, var_2_1, var_2_2)
middle = (summa - min - max) % 10

print(max * 100 + middle * 10 + min)
