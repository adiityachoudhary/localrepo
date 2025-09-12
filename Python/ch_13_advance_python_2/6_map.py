"""map()
Applies a function to each item in an iterable.
Syntax:
map(function, iterable)
we have to parse it into a list or whatever iterables we are using
🔑 Quick Point: It transforms each element individually."""

list1 = [1, 2, 3, 4, 5]
squared_list= list(map((lambda a: a**2), list1 ))  # lambda function will apply to each element of the list1 
print(squared_list)