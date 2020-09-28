import sys

S = input()

a = [0]*(len(S)+1)

for i in range(len(S)):
    if S[i] == '<':
        a[i+1] = max(a[i+1], a[i]+1)

for i in range(len(S)):
    if S[-i-1] == '>':
        a[-i-2] = max(a[-i-1]+1, a[-i-2])

count = 0
for i in a:
    count += i
print(count)

