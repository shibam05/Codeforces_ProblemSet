from math import ceil

n, k = map(int, input().split())
r, g, b = 2 * n, 5 * n, 8 * n
res = ceil(r / k) + ceil(g / k) + ceil(b / k)
print(res)
