#function in python

def sum(a,b):
    return a+b

def square(a):
    return a*a

def factorial(a):
    if (a==1 or a==0):
        return 1
    return a*factorial(a-1)


s=sum(150,20)
print('sum = ',s)

sq=square(15)
print('Square = ',sq)


f=factorial(5)
print('Factorial = ',f)


