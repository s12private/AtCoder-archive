import sys
import math

N, K = list(map(int, input().split()))
A = list(map(int, input().split()))

for i in range(N):
    if A[i] == 1:
        ans = N
        for j in range(max(0, i-(K-1)), min(N, i+K-1)):
            ans = min(math.ceil(j/(K-1)) + math.ceil((N-j-1)/(K-1)), ans)
        break
print(ans)