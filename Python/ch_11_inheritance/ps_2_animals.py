# Animals -> Pets -> Dog -> Bark @method

class Animals:
    pass

class Pets(Animals):
    pass

class Dog(Pets):
    @staticmethod
    def bark():
        print("Bhow Bhow!!")
    
d=Dog()
d.bark()