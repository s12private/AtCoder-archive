import sys

N, M = map(int, input().split())
A = list(map(int, input().split()))

B = {}
for i in range(M+1):
    B[i] = 0

for i in A:
    B[i] = int(B[i])+1

for i in B:
    if B[i] > N/2:
        print(i)
        sys.exit()
print("?")