n = int(input())
a, b, c = 0, 0, 0

if (n - 2) % 3 != 0:
    a = 1
    b = 1
    c = n - 2
else:
    a = 1
    b = 2
    c = n - 3

print(f"{a} {b} {c}")
