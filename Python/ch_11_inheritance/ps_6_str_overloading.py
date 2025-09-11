"""6. Write __str__() method to print the vector as follows: 
7i + 8j +10k  
Assume vector of dimension 3 for this problem. """


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
    
v1=Vector(2,3,4)
v2=Vector(5,5,6)
print(v1+v2)
