"""TYPES DEFINITIONS IN PYTHON 
-----------------------------------------------------------------------------------
Type hints are added using the colon (:) syntax for variables and the -> syntax for 
function return types. 
These annotations help in making the code self-documenting and allow developers to 
understand the data structures used at a glance. 
"""

#Variable Type definition
name: str = "Harry"
age: int = 25

#funtion type definition

def greet(name : str, age : int) -> str:
    return f"Hello {name}!! your age is {age}"

print(greet("Aditya",age))