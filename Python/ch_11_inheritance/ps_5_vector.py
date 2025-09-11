"""5. Write a class vector representing a vector of n dimensions. Overload the + and * 
operator which calculates the sum and the dot(.) product of them."""

class Vector:

    def __init__(self,i,j,k):
        self.i=i
        self.j=j
        self.k=k

    def __add__(self, other):
        return Vector(self.i + other.i, self.j + other.j, self.k + other.k)
    
    def __mul__(self, other):
        return ((self.i * other.i) + (self.j * other.j) + (self.k * other.k))
    
    def __str__(self):
        return f"{self.i}i + {self.j}j + {self.k}k"
    

v1=Vector(1,2,3)
v2=Vector(4,5,6)

print("Sum of two vectors : ",v1+v2)
print("DOT Product of two vectors : ",v1*v2)