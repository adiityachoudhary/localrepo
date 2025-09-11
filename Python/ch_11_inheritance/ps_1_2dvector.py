# create a 2d vector and use it to create another class representing a 3d vector

class Vector2d:
    
    def __init__(self, i, j):
        self.i=i
        self.j=j

    def __str__(self):   #we have to define this __str__ to set what will happen when the object is simply printed
        return (f"The 2D Vector is : {self.i}i {self.j}j")
    
class Vector3d(Vector2d):

    def __init__(self, i, j, k):
        super().__init__(i,j)
        self.k=k
        
    def __str__(self):   #we have to define this __str__ to set what will happen when the object is simply printed
        return (f"The 3D Vector is : {self.i}i {self.j}j {self.k}k")

v2=Vector2d(2,3)
v3=Vector3d(4,5,6)
print(v2)
print(v3)