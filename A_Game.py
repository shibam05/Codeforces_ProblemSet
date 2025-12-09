n = int(input())
nums = []
nums = list(map(int, input().split()))
nums.sort()
print(nums[(n-1)//2])
