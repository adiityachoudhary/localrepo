"""4. Write a class ‘Complex’ to represent complex numbers, along with overloaded 
operators ‘+’ and ‘*’ which adds and multiplies them. 
complex no. = a + b*i
a : real part
b : imaginary part
i : imaginary unit i.e. √-1
"""

class Complex:

    def __init__(self, real, imaginary):
        self.real=real
        self.imaginary=imaginary

    def __add__(self, other):
        # (a+bi) + (c+di) = ((a + c) + (b + d))i     # addition formula of two complex numbers
        return Complex((self.real + other.real) , (self.imaginary + other.imaginary))
    
    def __mul__(self,other):
       # (a+bi) * (c+di) = (ac - bd) + (ad + bc)i    # multiplication formula of two complex numbers
        real = self.real * other.real - self.imaginary * other.imaginary
        imaginary = self.real * other.imaginary + self.imaginary * other.real
        return Complex(real, imaginary)

    def __str__(self):          #this  __str__ method will display both add and mul operation of two complex no.
        return f"{self.real}+{self.imaginary}i"
    
c1=Complex(2,3)
c2=Complex(4,6)

print("Sum of two complex no. : ", c1+c2)
print("Product of two complex no. : ", c1*c2)