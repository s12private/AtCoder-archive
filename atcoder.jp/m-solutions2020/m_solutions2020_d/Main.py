import sys
import math

N = int(input())

A = list(map(int, input().split()))

money = 1000
stock = 0
for i in range(N-1):
    if A[i] < A[i+1]:
        stock += money//A[i]
        money -= money//A[i]*A[i]
    if A[i] > A[i+1]:
        money += stock*A[i]
        stock = 0
else:
    money += stock * A[i + 1]

print(money)