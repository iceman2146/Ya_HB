a = int(input())
a_list = [a // 100, a % 100 // 10, a % 10]
a_list = sorted(a_list)
ma = a_list[2] * 10 + a_list[1]
if a_list[1]:
    if a_list[0]:
        mi = a_list[0] * 10 + a_list[1]
    else:
        mi = a_list[1] * 10 + a_list[0]
else:
    mi = ma
print(mi, ma)
