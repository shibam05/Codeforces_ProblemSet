n = int(input())
nums = list(map(int, input().split()))

f = dict()
for i in range(n):
    f[nums[i]] = nums[nums[i] - 1]

love_triangle = False
for num in nums:
    if f[f[f[num]]] == num:
        love_triangle = True
        break
print("YES") if love_triangle else print("NO")
