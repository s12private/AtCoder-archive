import sys
s = []

for i in range(int(input())):
    W = input()
    if W in s:
        print("No")
        sys.exit()
    if len(s) != 0 and s[-1][-1] != W[0]:
        print("No")
        sys.exit()
    s.append(W)
print("Yes")