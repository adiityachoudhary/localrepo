"""Filters items from an iterable based on a condition (boolean function).
Syntax:
filter(function, iterable)
🔑 Quick Point: Keeps only the elements that satisfy the condition."""

list1 = [ 22, 45, 67, 20 ,56 ]

# def even(num):
#     if num%2==0:
#         return True
#     return False
# even_no=list(filter(even, list1))   #filter will check each element of the list1 if it is True or False

even_no=list(filter(lambda x:x%2==0, list1))   #filter will check each element of the list1 if it is True or False
print(even_no)