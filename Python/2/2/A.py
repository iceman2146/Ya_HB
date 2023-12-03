print(F"Как Вас зовут?")
username = input()
print(F"Здравствуйте, {username}!")
print(F"Как дела?")
answer = input()
if answer == "хорошо":
    print(F"Я за вас рада!")
elif answer == "плохо":
    print(F"Всё наладится!")
