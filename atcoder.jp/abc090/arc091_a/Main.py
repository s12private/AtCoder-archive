import sys

N, M = list(map(int, input().split()))

if N == M == 1:
    print(1)
    sys.exit()
elif N == 1 or M == 1:
    print(max(max(N, M)-2, 0))
    sys.exit()

N = max(0, N-2)
M = max(0, M-2)

print(N*M)