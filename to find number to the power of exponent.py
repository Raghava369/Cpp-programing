b=int(input())
exponent=int(input())
ans=1
while(exponent):
    if(exponent%2==0):
        b=b*b
        exponent=exponent//2
    else:
        ans*=b
        exponent=exponent-1
print(ans)