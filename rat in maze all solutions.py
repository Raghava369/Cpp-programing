r=int(input())
c=int(input())
l=[]
for i in range(r):
    #l.append(list(map(int,input().split())))
    l.append([0]*c)

for i in range(r):
    for j in range(c):
        if(i==0 or j==0):
            l[i][j]=1
        else:
            l[i][j]=l[i-1][j]+l[i][j-1]
print(l[r-1][c-1])
            
            
