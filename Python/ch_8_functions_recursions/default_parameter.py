#Default parameters

#here name="Stranger" is a default parameter
#it is used when no parameter is passed it will invoke automatically

def greet(name="Stranger"):
    print(f"Have a Good Day!! {name}")

#function call
greet() #in this call default parameter will invoke since no parameter is passed

greet("Harry")
greet("Rohan")
greet("Mike")