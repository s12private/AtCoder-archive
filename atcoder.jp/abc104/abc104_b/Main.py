import sys

S = input()

count = 0
for i in range(len(S)):
    if i == 0 and S[i] != "A":
        print("WA")
        sys.exit()

    if i == len(S)-1 and count != 1:
        print("WA")
        sys.exit()

    if i != 0 and i != len(S)-2 and S[i].isupper() and S[i] != "C":
        print("WA")
        sys.exit()

    if i >= 2 and i <= len(S)-2 and S[i] == "C":
        count += 1

print("AC")
