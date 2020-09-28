import sys

N, A, B = map(int, input().split())

ans = max(0, B*(N-1)+A-(A*(N-1)+B)+1)
print(ans)