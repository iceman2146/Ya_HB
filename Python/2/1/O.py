h = int(input())
m = int(input())
tm = int(input())
curt = h * 60 + m + tm
hs, mins = divmod(curt, 60)
d, hos = divmod(hs, 24)
print(f"{hos:02d}:{mins:02d}")
