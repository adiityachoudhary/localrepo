#list are containers to store a set of values of any type
#list is mutable 
#we can modify list in Python
# original list can be changed when we apply any function

list=['apple', 'banana', 'notebook', 2025, True, False]
print(list[1:3])  #list slicing


l1=[5,9,2,0]

print(list[0:3])

list[0]='mango'
print(list)

l1.reverse()
print(l1) 

l1.sort()
print(l1)

l1.append(8) #insert 8 in the end of the list
print(l1)

l1.insert(2,555) #insert element 555 at index 2
print(l1)

l1.pop(2)  #deletes element at index 2
print(l1)

l1.remove(0)  #removes the element
print(l1)

l1.remove(8)
print('8 is removed from the list l1 : ', l1) 

print("Sum of all the elements in l1 : ",sum(l1))  # sum()
print("Max among the elements in l1 : ",max(l1))   # max()
print("Min among the elements in l1 : ",min(l1))   # min()
