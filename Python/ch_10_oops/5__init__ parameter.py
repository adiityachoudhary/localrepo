# __init__ CONSTRUCTOR
#since its a constructor it will run automatically as soon as any object is created
# dunder method - methods which starts with double underscore (__method__)

class Employee:
    lang="Python"
    company="CWH"
    salary=60000
    
    def __init__(self, name, company, lang, salary):         #this will automatically gets called as soon as an object is created    
        self.name=name
        self.company=company
        self.lang=lang
        self.salary=salary
        print(f"Hello {self.name}")
        print(f"You work at {self.company} using language {self.lang} and your salary is {self.salary}")

harry = Employee("Harry","CWH","Javascript",1200000)  
# harry.name="Harry" #instead of doing this we can do this by __init__ constructor parameters
# harry.salary=1200000 
# harry.getInfo()

rohan= Employee("Rohan","Microsoft","C++",900000)
# rohan.name="Rohan"        #instead of doing this we can do this by __init__ constructor parameters
# rohan.lang="C++"          
# rohan.getInfo()
