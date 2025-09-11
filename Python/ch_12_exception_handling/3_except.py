# except block can only be paired with a try block


try:
    a=int(input("Enter first number : "))
    b=int(input("Enter second number : "))
    print("Sum : ",a+b)

except ValueError:
    print("Enter numbers as values!!")

except TypeError:   #if there is an Typeerror in try block
    print("Please enter numbers in both!!")

else:           # else block will only get executed if there is no error in the try block and gets executed successfully
    print("Program executed successfully")

finally:        #this will execute no matter what
    print("Execution finished")