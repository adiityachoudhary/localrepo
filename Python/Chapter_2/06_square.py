import math
import numpy as np

a=float(input("Enter no to square it : "))

square=a*a

#another methods to find square
# square=a**2
# square= math.pow(a,2)
# square= pow(a,2)

#numpy method
# square= np.square(a)

print(f"{a}^2 = {square}")