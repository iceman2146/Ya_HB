first = str(input())
second = str(input())
third = str(input())
min_length = 1
min_str = 'a'
if "зайка" in first:
    min_str = first
    min_length = len(first)
if "зайка" in second and second < min_str:
    min_str = second
    min_length = len(second)
if "зайка" in third and third < min_str:
    min_str = third
    min_length = len(third)
print(f"{min_str} {min_length}")
