""" 
@property decorator in Python is used to define methods that can be accessed like attributes.
It helps in encapsulation 
(object-oriented programming principle: hiding data and controlling access).
Normally, we define getters and setters explicitly, but with @property, 
Python allows us to write cleaner, more pythonic code.

# Quick Revision Points
@property → defines a getter.
@attribute.setter → defines a setter.
@attribute.deleter → can also define a deleter.
"""

class Employee:

    @property
    def name(self):
        return (f"Your name is {self.first_name} {self.last_name}")

    @name.setter
    def name(self, value):
        self.first_name = value.split(" ")[0]   #split() refer to 04_split.py in ch3-string 
        self.last_name  = value.split(" ")[1]

obj=Employee()
obj.name="Harry Khan"

print(obj.name)
print(f"First name : {obj.first_name}\nLast name : {obj.last_name}")