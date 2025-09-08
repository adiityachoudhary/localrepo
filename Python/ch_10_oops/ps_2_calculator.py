# calculator

class Calculator:

    def __init__(self):
        print("Welcome to calculator")

    def square(self):
        self.num=int(input("Enter number to square : "))
        return self.num**2
    
    def cube(self):
        self.num=int(input("Enter number to cube : "))
        return self.num**3
    
    def square_root(self):
        self.num=int(input("Enter number to square root : "))
        return self.num**(1/2)
    

calc=Calculator()

print(calc.square())
print(calc.cube())
print(calc.square_root())