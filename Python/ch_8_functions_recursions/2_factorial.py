# factorial
# 1!= 1
# 2!= 2x1
# 3!= 3x2x1
# 4!= 4x3x2x1
# 5!= 5x4x3x2x1
#Hence
# 5!=5x4!
# n!=4 x (n-1) x ..... 3 x 2 x 1
# factorial(n)=n x factorial(n-1)

def fact(n):
    if(n==1 or n==0):  #base condition to avoid infinite loop
        return 1
    return n * fact(n-1)

f=fact(5)  #function call
print(f) 
