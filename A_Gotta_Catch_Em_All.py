from collections import defaultdict

s = str(input())
m = defaultdict(int)
for c in s:
    m[c] += 1

ans = m["B"]
ans = min(ans, m["u"] // 2)
ans = min(ans, m["a"] // 2)
ans = min(ans, m["b"])
ans = min(ans, m["s"])
ans = min(ans, m["r"])
ans = min(ans, m["l"])
print(ans)
