simpsons 3/8th rule

from sympy import*
x=Symbol('x')
g=1/(1+x**2)
f=lambdify(x,g)
a=0
b=1
n=6
h=(b-a)/n
sum=f(a)+f(b)
for i in range(1,n):
    k=a+i*h
    if i%3==0:
        sum=sum+2*f(k)
    else:
        sum=sum+3*f(k)
I=sum*h*3/8
print("I=%0.4f"%I)        
