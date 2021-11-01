#to find a gcd of number
a=int(input())
b=int(input())
while a!=0:
    if(a>=b):
        a=a%b
    else:
        a=a+b
        b=a-b
        a=a-b
print(b)
