"""reduce()
Performs a rolling computation to reduce an iterable to a single value.
(It’s in the functools module, so you must import it.)
Syntax:
from functools import reduce
reduce(function, iterable[, initializer])
🔑 Quick Point: Keeps combining elements until only one result remains."""


from functools import reduce

list1 = [1, 2, 3, 4, 5]
sum_list= reduce( lambda a, b: a+b, list1 )   # sum every two elements of the list1 to give a single value
print(sum_list)

factorial=reduce(lambda a,b : a*b, list1)
print("Factorial of elements of list1: ",factorial)