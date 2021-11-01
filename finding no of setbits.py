def setbit(n):#-->1010
    c=0
    while(n):
        if(n&1==1):# & is bitwise operator
            c+=1#1,2
        n=n>>1#101-->10-->0
    print(c)
        
