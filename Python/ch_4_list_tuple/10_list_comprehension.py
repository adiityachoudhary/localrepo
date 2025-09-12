"""LIST COMPREHENSIONS 
List Comprehension is an elegant way to create lists based on existing lists. 
list1 = [1,7,12,11,22,] 
list2 = [i for item in list 1 if item > 8]"""

li=[2,3,4,5]

# we have to do this much to have a squared list but with list comprehension it will require less code
# squared_list=[]
# for element in li:
#     squared_list.append(element**2)
# print(squared_list)

squared_list = [ element**2 for element in li ]     #this will append the (element**2) for each element
print(squared_list)
