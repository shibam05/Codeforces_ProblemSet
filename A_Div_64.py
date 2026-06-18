# ATTEMPTED
s = input().strip()
n = len(s)
zero_cnt = 0
i = n - 1

while zero_cnt < 6:
    if i >= 0 and s[i] == "0":
        i -= 1
        zero_cnt += 1

possible = zero_cnt >= 6
while i >= 0:
    if s[i] == "1":
        if zero_cnt >= 6:
            possible = True
            break
    else:
        i -= 1

print("yes") if possible else print("no")
