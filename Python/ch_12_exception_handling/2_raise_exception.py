# we can raise any exception on our own
# its a custom message when the ZeroDivisionError comes

a=int(input("Enter first number : "))
b=int(input("Enter second number : "))

if (b==0):
    raise ZeroDivisionError("You can't divide anything by 0 in Python")   #its a custom message when the ZeroDivisionError comes
else:
    print(f"Division : {a/b}")