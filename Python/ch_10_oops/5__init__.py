# __init__ CONSTRUCTOR
#since its a constructor it will run automatically as soon as any object is created
# dunder method - methods which starts with double underscore (__method__)

class Employee:
    lang="Python"
    company="CWH"
    salary=60000
    
    def __init__(self):         #this will automatically gets called as soon as an object is created    
        print("\n__init__ constructor executed!!")
        print(f"An object is created")

    def getInfo(self):
        print(f"Your name is {self.name}, and you work at {self.company} using language {self.lang}")
    
    @staticmethod
    def greet():
        print("Hello user")

harry = Employee()          #object 1 - harry
harry.name="Harry"

harry.salary=1200000 #instance attribute
harry.getInfo()


rohan= Employee()  #this will again invoke __init__ constructor as an object is created 
rohan.name="Rohan"
rohan.lang="C++"
rohan.getInfo()
