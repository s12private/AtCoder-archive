import sys
A, B = map(int, input().split())

ans = 0
for i in range(3):
    if(A*B*(i+1)%2 == 1):
        print("Yes")
        sys.exit()

print("No")

