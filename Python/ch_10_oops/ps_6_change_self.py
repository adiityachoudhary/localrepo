# change self parameter to harry
# self is just like this-> 
#in pyhton it can be renamed whatever you want like harry, h1, slf etc
# but it is always a good idea to stick with self for better readability


class Employee:

    
    def __init__(self,name,salary):
        self.name=name
        self.salary=salary

    def getInfo(hry):                     #here self is changed to hry
        print(f"Name : {hry.name}")       #here self is changed to hry
        print(f"Salary : {hry.salary}")   #here self is changed to hry

        
harry=Employee("Harry Bhai", 1200000)

harry.getInfo()