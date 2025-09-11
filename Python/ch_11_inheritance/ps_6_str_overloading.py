"""6. Write __str__() method to print the vector as follows: 
7i + 8j +10k  
Assume vector of dimension 3 for this problem. """


class Vector:
    def __init__(self,i,j,k):
        self.i=i
        self.j=j
        self.k=k
    def __str__(self):
        return f"{self.i}i + {self.j}j + {self.k}k"
    
v=Vector(7,8,10)
print(v)
