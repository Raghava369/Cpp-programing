def setbit(n):#-->1010
    n=n>>p
    if(n&1==1):
        return True
n=int(input("enter n"))
p=int(input("enter a position"))
if(setbit(n)):
    print("Yes")
else:
    print("No")
        
