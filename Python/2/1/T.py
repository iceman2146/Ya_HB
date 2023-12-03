n, m, k1, k2 = int(input()), int(input()), int(input()), int(input())
x = (m * n - n * k2) / (k1 - k2)
y = n - x
print(int(x), int(y), sep=" ")
