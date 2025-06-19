from sympy import*
x,y=symbols('x y')
x0=0.4
y0=1
h=0.1
g=1/(x+y)
f=lambdify([x,y],g)
x1=x0+h
k1=h*f(x0,y0)
print("k1=%0.4f"%k1)
k2=h*f(x0+h/2,y0+k1/2)
print("k2=%0.4f"%k2)
k3=h*f(x0+h/2,y0+k2/2)
print("k3=%0.4f"%k3)
k4=h*f(x0+h,y0+k3)
print("k4=%0.4f"%k4)
y1=y0+(1/6)*(k1+2*k2+2*k3+k4)
print("y(%0.2f)=%0.4f"%(x1,y1))
