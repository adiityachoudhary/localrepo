"""7. Override the __len__() method on vector of problem 5 to display the dimension of the 
vector. """

class Vector:

    def __init__(self,a,b,c):
        self.a=a
        self.b=b
        self.c=c

    def __add__(self, other):
        return Vector(self.a + other.a, self.b + other.b, self.c + other.c)
    
    def __mul__(self, other):
        return Vector((self.a * other.a) + (self.b * other.b) + (self.c * other.c))
    
    def __str__(self):
        return f"{self.a,self.b,self.c}"
    
    def __len__(self):
        return len()
    

v1=Vector(1,2,3)
v2=Vector(4,5,6)

print(v1+v2)

print(len(v1))

