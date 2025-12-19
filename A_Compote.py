a = int(input())
b = int(input())
c = int(input())
res = 0
i = 1

while True:
    p, q, r = 1 * i, 2 * i, 4 * i
    if a < p or b < q or c < r:
        break
    res = p + q + r
    i += 1

print(res)
