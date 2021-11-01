S="ABCDEFGHIJKLMNOPQRSTUVWXYZ"
S="\n".join([S[i:i+4] for i  in range(0,len(S),4)])
print(S)
