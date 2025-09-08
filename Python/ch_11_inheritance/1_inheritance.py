# inheritance
# child/derived class inherits the properties of Parent/Base class

class Employee:    # base/parent class
    company="CWH"

    def get_info(self):
        print(f"Your company name is : {self.company}")


class Programmer(Employee):    # child/derived class
    salary="1200000"
    
    def display(self):
        print(f"Your company name is {self.company} and your salary is {self.salary}")


obj1=Programmer()
obj1.display()      #here self.company is inherited from the parent class i.e. Employee class
obj1.get_info()     #here get_info() is inherited from the parent class i.e. Employee class

obj2 = Employee()   #parent class object
obj2.get_info()     #parent class method
# obj2.display()    # as we can see this method can't be accessed by parent class since it is not inherited backwards