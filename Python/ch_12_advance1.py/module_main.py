"""IF __NAME__== ‘__MAIN__’ IN PYTHON  
‘__name__’ evaluates to the name of the module in python from where the program is ran. 
If the module is being run directly from the command line, the ‘ __name__’ is set to 
string “__main__”. Thus, this behaviour is used to check whether the module is run 
directly or imported to another file. """
# __name__ will print: __main__ if it is ran from the original file
# but if imported from another file it will print the file name that the module has
#Its main use to denaote where the file has ran from

def my_func():
    print("Hello world!!")

my_func()

if (__name__ =="__main__"):
    #if this code is directly running from the original file itself 
    print("This code is directly executed by from it's original file itself i.e.")
    print(__name__)
else:
    print("the code has been imported")