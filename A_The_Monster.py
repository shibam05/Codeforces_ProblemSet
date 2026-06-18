a, b = map(int, input().split())
c, d = map(int, input().split())


def gcd(m, n):
    while n:
        m, n = n, m % n
    return m


if (b - d) % gcd(a, c) != 0:
    print("-1")
else:
    for k in range(0, 10000):
        t = b + k * a
        if t >= d and (t - d) % c == 0:
            print(t)
            break
