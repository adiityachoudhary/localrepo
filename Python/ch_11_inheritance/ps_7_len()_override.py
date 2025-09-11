"""7. Override the __len__() method on vector of problem 5 to display the dimension of the 
vector. """

class Vector:

    def __init__(self, list):
        self.list = list
    
    def __len__(self):
        return len(self.list)
    

v1=Vector([1,2,3,4])
v2=Vector([4,5,6,5])

# print("Sum of two vectors : ",v1+v2)
# print("DOT Product of two vectors : ",v1*v2)

print("Length of Vector : ",len(v1))

