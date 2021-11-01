def fibanacci(n):
    if(n==1 or n==2):
        return n-1
    return fibanacci(n-1)+fibanacci(n-2)
n=int(input())
print(fibanacci(n))
        
