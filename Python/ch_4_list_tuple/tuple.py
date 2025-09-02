#tuple is an immutable data type in python
#but can be reassigned it's like a label is removed from the first box and pasted on the other 

#empty tuple
empty_tuple=()
print(empty_tuple)

#tuple with one element
tuple_with_one_element=(5,)
print(tuple_with_one_element)

t=(5,6,8,2,1,3,4,5)
print(t)

print(t.count(5))  #counts the occurence of the digit

print(t.index(2))  #shows the index of which the digit is present at

#reassigning tuple t
t=(5,8,4)
print(t)

print(t[1])

# t[2]=3   #just like strings tuple is immutable but can be reassigned
# print(t)


a=(12,'Harry', True, 'IIT KGP')
print(a)
print(type(a))

print(a[1])

length=len(a)  #length of tuple a
print(length)

#repeated tuple
repeated= a*2
print(repeated)

print('Harry' in a)
print('NIT KGP' in a)

tup=(1,2,3)
a,b,c= tup
print(a)
print(b)
print(c)
