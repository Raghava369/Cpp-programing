import math
n=int(input())
p=int(input())
l=[1,n]
for i in range(2,int(math.sqrt(n))+1):
    if(n%i==0):
        l.append(i)
        if n//i not in l:
            l.append(n//i)
l.sort()
p=p-1
print(l[p])
        
               
               
               
               
