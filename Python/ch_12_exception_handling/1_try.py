"""There are many built-in exceptions which are raised in python when something goes 
wrong. 
Exception in python can be handled using a try statement. The code that handles the 
exception is written in the except clause. 
try: 
# Code which might throw exception  
except Exception as e:  
print(e) """

# all exceptions inherit from the base Exception class.
""" Some common types of errors :- 
ZeroDivisionError →   dividing by zero.
ValueError        →   wrong type of value (e.g., converting "abc" to int).
TypeError         →   wrong type operation (e.g., 5 + "hi").
IndexError        →   invalid list index access.
KeyError          →   dictionary key not found.
FileNotFoundError →   file handling errors.
ImportError / ModuleNotFoundError →  problems with importing modules.
AttributeError    →   accessing non-existing attribute/method.
RuntimeError      →   generic runtime error.
Exception         →   the base class that catches all exceptions."""

try : 
    a= int(input("Enter a number : "))
    print(a)

except Exception as err: 
    print(err)
    print("Enter a valid number!!")

