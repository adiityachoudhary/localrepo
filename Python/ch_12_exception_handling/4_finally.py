#finally 
# main use of finally is in a function that even if the function returns and goes back to the main block finalyy will still be executed
#it will be executed no matter what

def add(a,b):
    try:
        # a=int(input("Enter first number : "))
        # b=int(input("Enter second number : "))
        print("Sum : ",a+b)
        return

    except Exception as e:
        print(e)
        return

    finally:        #this will execute no matter what
        print("Finally block will be executed even if function returns")

add(12,"hello")