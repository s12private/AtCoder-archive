import sys

A, B, C, D = list(map(int, input().split()))

if A+B > C+D:
    print("Left")
elif A+B == C+D:
    print("Balanced")
else:
    print("Right")