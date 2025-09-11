""" 3) Create a class ‘Employee’ and add salary and increment properties to it. 
Write a method ‘salaryAfterIncrement’ method with a @property decorator with a setter 
which changes the value of increment based on the salary"""

class Employee:
    rate_of_increment=10
    def __init__(self, salary):
        self.salary = salary

    @property
    def salary_after_increment(self): 
       return self.salary + (self.salary * (self.rate_of_increment/100))

    @salary_after_increment.setter
    def salary_after_increment(self,value):
        self.increment=value-self.salary
       
e1=Employee(250)
print("salary : ",e1.salary)
print("salary after increment of 10% : ",e1.salary_after_increment)

e2=Employee(300)
print("salary : ", e2.salary)
print("salary after increment of 10% : ", e2.salary_after_increment)

e2.salary_after_increment=e2.salary_after_increment 
print("Amount increased : ₹",e2.increment)