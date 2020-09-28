import sys

N = int(input())

count = 0
for a in range(1, N+1):
    count += N//a
    if N%a == 0:
        count -= 1
print(count)