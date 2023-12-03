value = input()
value_list = list(value)
summa_max_min = int(max(value_list)) + int(min(value_list))
summa = 0
for i in range(len(value_list)):
    summa += int(value_list[i])

raznost = summa - summa_max_min
if summa_max_min == 2 * raznost:
    print(f"YES")
else:
    print(f"NO")
