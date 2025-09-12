"""ENUMERATE FUNCTION IN PYTHON 
The ‘enumerate’ function adds counter to an iterable and returns it 

list1=["harry","rohan","sam"]
index=0
for item in list1: 
        print( index, item)
        index+=1 

    # Prints the items of list 1 with index
    # to simplify this we use enumerate(iterable, start=0) function """

fruits = ["apple", "banana", "mango", "watermelon"]
for index, item in enumerate(fruits , start=1):   #we can set the starting point to whatever we want by default it is set to 0
    print(index, item)