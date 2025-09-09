#super() is used to invoke any method from the base class of which it is derived from
# super().base_class_method() - add method after super() followed by a DOT(.)

class Employee:    # base/parent class  # BAAP
    company="CWH Limited"
    location="IIT Kharagpur"
    def __init__(self):
        print("Constructor of Employee")

    def get_info(self):
        print(f"Your company name is {self.company} based at {self.location}")

class Manager(Employee):    # base/parent class     #BETA
    project="AI tool"
    language="Python"

    def __init__(self):
        super().__init__()  #method of base class constructor
        print("Constructor of Manager")

    def task(self):
        print(f"You are working on {self.project} using {self.language}")
        super().get_info()    #method of base class

obj1=Manager()
obj1.task()