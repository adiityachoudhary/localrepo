# single inheritance
# child/derived class inherits the properties from only one Parent/Base class

class Employee:    # base/parent class
    company="CWH"

    def get_info(self):
        print(f"Your company name is : {self.company}")


class Programmer(Employee):    # child/derived class
    salary="1200000"
    
    def display(self):
        print(f"Your company name is {self.company} and your salary is {self.salary}")


obj1=Programmer()
obj1.get_info()
obj1.display()