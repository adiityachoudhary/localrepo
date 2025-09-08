#class - is a blueprint to create an object
#object - is an instantiation of class

class Employee:
    lang="Python"
    company="CWH"

harry = Employee()          #object 1 - harry
harry.name="Harry"
print("Name : ",harry.name)    #here harry.name is object attributes and .company and .lang are class attributes
print("Company : ",harry.company)
print("Language : ",harry.lang)

rohan = Employee()          #object 2 - rohan
rohan.name="Rohan"
print("Name : ",rohan.name)
print("Company : ",rohan.company)
print("Language : ",rohan.lang)