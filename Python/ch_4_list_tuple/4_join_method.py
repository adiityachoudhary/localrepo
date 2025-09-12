"""JOIN METHOD (STRINGS)  Creates a string from iterable objects. 
The below code will return “apple, and, mango, and, banana”."""
# l = ["apple", "mango", "banana"] 
# result = ", and, ".join(l) 
# print(result)



li = ["harry", "rohan", "shubham"]
result= " and ".join(li)   #this will replace commas between the elements of the list
print(result)

yuga = ["satyuga", "tretayuga", "dwaparyuga", "kaliyuga"] 
cycle = "-> ".join(yuga) 
print(cycle) 