t = int(input())
for i in range(t):
    a, b, c, d, k = map(int, input().split())
    pens = (a + c - 1) // c  # or ceil(a/c)
    pencils = (b + d - 1) // d
    print(pens, pencils) if pens + pencils <= k else print(-1)
