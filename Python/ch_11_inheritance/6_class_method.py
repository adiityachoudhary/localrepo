# @classmethod
# it is when when we want to print class method/attributes instead of instance method/attributes
# while using a @classmethod we have to change self pointer to cls

class Demo:
    a=55555

    def get_info(self):
        print(f"The instance value is {self.a}")

    @classmethod
    def display(cls):
        print(f"The class value is {cls.a}")

obj1=Demo()
obj1.a=22222      #instance attribute has been set to a=22222
obj1.get_info()  #this will show the instance attribute
obj1.display()   #this will show the class attribute since it has been set to a @classmethod

    