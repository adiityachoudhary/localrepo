"""WALRUS OPERATOR (:=)
The walrus operator (:=), introduced in Python 3.8, allows you to assign values to 
variables as part of an expression. This operator, named for its resemblance to the eyes 
and tusks of a walrus, is officially called the "assignment expression." 

TYPES DEFINITIONS IN PYTHON 
In this example, n is assigned the value of len([1, 2, 3, 4, 5]) and then used in 
the comparison within the if statement. """


#conventionally we will do like this
# n=[1,2,3,4,5]
# length=len(n)
# if (length >3):
#     print(f"The list n contains {length} elements which is greater than 3")
# else:
#     print(f"The list n contains {length} elements which is less than 3")

# instead of using all these line we will use a walrus(:=) operator to reduce the code lines
if (n := len([1,2,3,4,5])) > 3:
    print(f"The list n contains {n} elements which is greater than 3")
else:
    print(f"The list n contains {n} elements which is less than 3")
