import sys

N = int(input())

count = 0
for i in range(N):
    a, b = map(int, input().split())
    count = count+1 if a==b else 0
    if count == 3:
        print("Yes")
        sys.exit()
print("No")