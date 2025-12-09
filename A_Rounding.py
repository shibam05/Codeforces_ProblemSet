n = int(input())
r1, r2 = 0, 0
r1 = (n//10)*10
r2 = r1 + 10
if n-r1 <= r2-n:
    print(r1)
else:
    print(r2)
