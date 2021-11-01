def reverse(n):
    if(n==0):
        return
    print(n)
    reverse(n-1)
    print(n)


    
n=int(input())
reverse(n)
