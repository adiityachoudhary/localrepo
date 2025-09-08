#class attribute

class Practice:
    a=5

obj1 = Practice()
print(obj1.a)  #this will print class attribute because instance attribute is absent

obj1.a=0    #instance attribute is set obj1.a=0
print(obj1.a)  #this will print instance attribute because it is present now

print(Practice.a)  #this will again print the class attribute once again