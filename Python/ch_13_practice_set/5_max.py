"""5. Write a program to find the maximum of the numbers in a list using the reduce 
function. """

from functools import reduce
l1=[1,2,3,4,5]

def great(a,b):
    if a>b:
        return a
    elif b>a:
        return b
    
greatest=reduce(great, l1)  #two elements from l1 will go in the great() and so on #survival of the fittest
print("Max in list l1 : ",greatest)