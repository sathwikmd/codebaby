from sympy import*
x,y=symbols('x y')
g=2*exp(x)-y
f=lambdify([x,y],g)
h=0.1
x0=0
y0=2
x1=0.1 
y1=2.01
x2=0.2
y2=2.04
x3=0.3
y3=2.09
x4=x3+h
y01=f(x0,y0)
print("y0=%0.4f"%y01)
y11=f(x1,y1)
print("y1=%0.4f"%y11)
y21=f(x2,y2)
print("y2=%0.4f"%y21)
y31=f(x3,y3)
print("y3=%0.4f"%y31)
y4p=y0+(4*h/3)*(2*y11-y21+2*y31)
y41=f(x4,y4p)
for i in range(2):
    print("y4=%0.4f"%y41)
    y4c=y2+(h/3)*(y21+4*y31+y41)
    print("corrected value of y4 after\t iteration %d is\t %0.4f"%(i,y4c))
    y41=f(x4,y4c)
    
