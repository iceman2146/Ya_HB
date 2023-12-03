year = int(input())
# if ((year%400==0|year%4==0)&year%100!=0):


if (year % 400 == 0) or (year % 4 == 0) and (year % 100 != 0):
    print(f"YES")
else:
    print(f"NO")
