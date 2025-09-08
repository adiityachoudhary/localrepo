# static method 
#is acts as a decorator
# it is used in functions where there is no need to pass any object or self parameter 

class Employee:
    lang="Python"
    company="CWH"

    def getInfo(self):
        print(f"Your name is {self.name}, and you work at {self.company} using language {self.lang}")

    @staticmethod
    def greet():
        print("Good morning!!")

harry = Employee()          #object 1 - harry
harry.name="Harry"

harry.getInfo()  # Equivalent to Employee.getInfo(harry) 
#that is why we have to always pass a self parameter in a class method

harry.greet()

Employee.greet()  #equivalent to harry.greet()
# as we can see this time we haven't passed any object as argument but it still works de to @staticmethod
