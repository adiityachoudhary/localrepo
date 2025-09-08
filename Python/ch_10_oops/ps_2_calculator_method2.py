# calculator that finds square, cube and square root

class Calculator:

    def __init__(self, n):
        self.n=n

    def square(self):
        print(f"Square of the {self.n} : {self.n**2}")

    def cube(self):
        print(f"Cube of the {self.n} : {self.n**3}")

    def square_root(self):
        print(f"Square root of the {self.n} : {self.n**(1/2)}")

num1= Calculator(9)
num1.square()
num1.cube()
num1.square_root()