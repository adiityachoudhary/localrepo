"""LAMBDA FUNCTIONS    
Function created using an expression using ‘lambda’ keyword. 
Syntax: 
# can be used as a normal function 
"""
# lambda function is same as Arrow function in javascript (=>)
# lambda arguments:expressions 

#conventional method of using a function
def square(a):
    return(a**2)

print(square(5))

# lambda function
cube = lambda c : c**3
print("Cube : ",cube(5))

# sum fucntion using lambda
sum = lambda a, b, c : a + b + c
print("Sum : ",sum(4,6,10))

# divisibility check
div_by_2 = lambda n : (n%2==0)
print("Divisible by 2 : ",div_by_2(15))