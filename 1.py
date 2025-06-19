from sympy import*
x=Symbol('x')
g=exp(-x**2)
f=lambdify(x,g)
a=0
b=0.6
n=6
h=(b-a)/n
sum=f(a)+f(b)
for i in range(1,n):
    k=a+i*h
    if i%2==0:
        sum=sum+2*f(k)
    else:
        sum=sum+4*f(k)
I=sum*h/3
print("I=%0.4f"%I)        
