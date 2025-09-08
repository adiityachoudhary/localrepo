# self is a parameter we have to pass when creating class methods
#by default (harry) is passed as a parameter that is why (self) is passed
# self parameter is something like this-> in c++ except the fact that this-> doesn't get passed as parameter in any function

class Employee:
    lang="Python"
    company="CWH"

    def getInfo(self):
        print(f"Your name is {self.name}, and you work at {self.company} using language {self.lang}")

harry = Employee()          #object 1 - harry
harry.name="Harry"
harry.lang="Javascript"

harry.getInfo()  # Equivalent to Employee.getInfo(harry) 
#that is why we have to always pass a self parameter in a class method

# Employee.greet(harry)   #by default harry is passed as a parameter that is why self is passed