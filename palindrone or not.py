def palin(n,i):
    if(i==len(n)//2):
        return True
    if(n[i]!=n[len(n)-i-1]):
        return False
    return palin(n,i+1)
n=input()
if(palin(n,0)):
    print("palindrone")
else:
    print("not a palindrone")
