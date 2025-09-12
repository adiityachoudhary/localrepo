""" A list contains the multiplication table of 7. write a program to convert it to vertical 
string of same numbers. """
n=7
#.join() will only take str thats why converted each element to str using list comprehension method
list1 = [ str(n*i) for i in range(1,11)]  
table= "\n".join(list1)
print(table)