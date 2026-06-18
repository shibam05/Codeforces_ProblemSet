from math import ceil, floor

t = int(input())
for _ in range(t):
    n, k = map(int, input().split())

    if k > n:
        print(-1)
        continue

    elif k == n:
        print(0)
        continue

    equal = False
    steps = 0
    x, y = n, n

    while not equal:
        x, y = ceil(n / 2), floor(n / 2)
        if x == k or y == k:
            print(steps)
            equal = True
        if x < k and y < k:
            print(-1)
            break
        steps += 1
