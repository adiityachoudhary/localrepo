# global keyword
#‘global’ keyword is used to modify the variable outside of the current scope.

a=5 
def fun():
    global a    # after adding the global keyword it is refering to the global keyword 
                # here the global keyword will be changed
    a=10        # local variable #it won't change thebglobal variable 
    print(a)

fun()
print(a)