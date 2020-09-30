import sys
import math

N = int(input())

a = N//11*2
if N%11 == 0:
    print(N//11*2)
else:
    print(N//11*2+(1 if N%11<7 else 2))