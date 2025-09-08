# multiple inheritance
# child/derived class inherits the properties from more than one Parent/Base class

class Employee:    # base/parent class
    company="CWH"

    def get_info(self):
        print(f"Your company name is : {self.company}")

class Manager():    # base/parent class
    project="Payment App"
    language="Python"
    
    def task(self):
        print(f"You are working on {self.project} using {self.language}")

class Programmer(Employee, Manager):    # child/derived class
    salary="1200000"
    
    def display(self):
        print(f"Your company name is {self.company} and your salary is {self.salary}")

obj1=Programmer()   #child class object
obj1.get_info()     #from base class Employee
obj1.task()         #from base class Manager

obj1.project="Web App"      #instance attribute
obj1.language="Javascript"  #instance attribute
obj1.task()                 #inherited method from base class Manager