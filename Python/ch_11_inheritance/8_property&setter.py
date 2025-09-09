# @property          - Getter
# @attribute.setter  - Setter

class Student:

    @property
    def marks(self):        #this marks attribute/property will simply give the marks
        return self.number
    
    @marks.setter           #but after having the marks property in setter we can finds its division
    def marks(self,value):  # now we have self.division and self.number/self.marks = value
        self.number=value
        if (value >= 60 and value<=100):        #this is an example of abstraction 
            self.division= "1st Division"       #that we are only passing the value as obj.marks=56
        elif (value >=50 and value <60):        #and the division get automatically gets calculated
            self.division= "2nd Division"       # obj.division
        elif (value >=33 and value <50):
            self.division= "3rd Division"
        elif (value <33):
            self.division= "FAIL"
        else:
            self.division= "INVALID MARKS"

obj=Student()
obj.marks=56
print(f"You are {obj.division} and scored {obj.marks}%")
    
#another object using the @property and @attribute.setter decorators
harry=Student()
harry.name="Code with Harry"
harry.marks=95
print(f"Marks obtained by {harry.name} is {harry.marks} with {harry.division} ")
