"""Operator overloading means giving special meaning to operators (+, -, *, etc.) when they are used 
with objects of a user-defined class.
In Python, this is done using magic methods (special methods with double underscores, like __add__, 
__sub__, etc.).

Example: Normally, + adds numbers or concatenates strings. But here you are telling Python 
what + should do when it sees two objects of class Number."""
#operator overloading
# these dunder methods defines what should be happen when the opeartion is done on the objects
# for eg: if objects n1+n2 done then __add__ will be invoked and the methods defined in its scope
# will be executed 

class Number:
    def __init__(self,n):
        self.n=n
    
    def __add__(self,num):
        return self.n + num.n

    def __sub__(self,num):
        return self.n - num.n

    def __mul__(self,num):
        return self.n * num.n

    def __truediv__(self,num):
        return self.n / num.n

    def __floordiv__(self,num):  # floor division 7/3=2.9999 but the answer will be 2
        return self.n // num.n

n1=Number(7)
n2=Number(3)

# print(n1.n + n2.n)  #without operator overloading addition is possible only to the numbers but not objects
print(n1+n2)
print(n1-n2)
print(n1*n2)
print(n1/n2)
print(n1//n2)
