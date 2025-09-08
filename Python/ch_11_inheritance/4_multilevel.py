# multiple inheritance
# child/derived class inherits the properties from more than one Parent/Base class

class Employee:    # base/parent class  # DADA
    company="CWH"

    def get_info(self):
        print(f"Your company name is : {self.company}")

class Manager(Employee):    # base/parent class     #BAAP
    project="AI tool"
    language="Python"
    
    def task(self):
        print(f"You are working on {self.project} using {self.language}")

class Programmer(Manager):    # child/derived class     #BETA
    salary="1200000"
    
    def display(self):
        print(f"Your company name is {self.company} and your salary is {self.salary}")

obj1=Manager()
obj1.get_info()

obj2=Programmer()  # derived class object of Manager which is a derived class of Employee
obj2.get_info()     # method in Employee i.e. Base class of Manager
obj2.task()         # method in Manager i.e. Base class of Programmer
obj2.display()

