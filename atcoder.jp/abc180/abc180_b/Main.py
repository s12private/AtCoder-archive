import sys
import math

N = int(input())
x = list(map(int, input().split()))

m = 0
y = 0
c = 0

for X in x:
    m += abs(X)
    y += abs(X)**2
    c = max(c, abs(X))

print(m)
print(y**(1/2))
print(c)