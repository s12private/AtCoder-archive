import sys

s = input().split()
N = int(input())
t = [input() for i in range(N)]

ans = []
for word in s:
    isNG = False
    for ng in t:
        if len(ng) == len(word):
            flag = False
            for i in range(len(ng)):
                if ng[i] != '*' and ng[i] != word[i]:
                    flag = True
                    break
            if not flag:
                isNG = True

    if isNG:
        ans.append("*" * len(word))
    else:
        ans.append(word)

print(*ans, sep=" ")