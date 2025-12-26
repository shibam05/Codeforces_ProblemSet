pals = [
    "00:00",
    "01:10",
    "02:20",
    "03:30",
    "04:40",
    "05:50",
    "10:01",
    "11:11",
    "12:21",
    "13:31",
    "14:41",
    "15:51",
    "20:02",
    "21:12",
    "22:22",
    "23:32",
]

t = str(input())
h = 10 * int(t[0]) + int(t[1])
m = 10 * int(t[3]) + int(t[4])
ans = -1

for i in range(len(pals)):
    target = pals[i]
    th = 10 * int(target[0]) + int(target[1])
    tm = 10 * int(target[3]) + int(target[4])
    if th * 60 + tm >= h * 60 + m:
        ans = (th * 60 + tm) - (h * 60 + m)
        break

if h >= 23 and m >= 33:
    ans = 23 * 60 + 60 - h * 60 - m
print(ans)
