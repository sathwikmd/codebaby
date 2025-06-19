from sympy import*
x,y=symbols('x y')
x0=0
y0=1
xn=0.2
h=0.1
g=3*x+y/2
f=lambdify([x,y],g)
i=1
while(x0<xn):
   x1=x0+h
   y1=y0+h*f(x0,y0)
   print("y",i,"at iteration 0=%0.4f"%y1)
   for j in range(2):
       y1=y0+(h/2)*(f(x0,y0)+f(x1,y1))
       print("y",i,"at iteration %d=%0.4f"%(j+1,y1))
   print("\n")
   x0=x1
   y0=y1
   i=i+1    
