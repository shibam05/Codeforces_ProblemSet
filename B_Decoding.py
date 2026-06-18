n = int(input())
s = str(input())
res = [""] * n
l, r = n // 2, n // 2
for i in range(n):
    if i % 2 == 0:
        res[r] = s[i]
        l -= 1
        r += 1
    else:
        res[l] = s[i]
        l -= 1
        r += 1

print("".join(res))
