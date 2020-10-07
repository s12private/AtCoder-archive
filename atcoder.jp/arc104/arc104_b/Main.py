import sys
import math

N, S = input().split()

n = int(N)

ans = 0
for i in range(n):
    count = [0] * 2
    for j in range(i, n):
        if S[j] == 'A':
            count[0] += 1
        if S[j] == 'T':
            count[0] -= 1
        if S[j] == 'C':
            count[1] += 1
        if S[j] == 'G':
            count[1] -= 1
        if count[0] == count[1] == 0:
            ans += 1
print(ans)