"""LIST COMPREHENSIONS 
List Comprehension is an elegant way to create lists based on existing lists. 
list1 = [1,7,12,11,22,] 
list2 = [i for item in list 1 if item > 8]"""

li=[22,45,66,77,35,78,98,35]

even = [ item for item in li if (item%2==0)]
print("Even list : ",even)

odd = [ item for item in li if (item%2!=0)]
print("Odd list : ",odd)

divisible_by_5 = [item for item in li if (item%5==0)]
print("Divisible by 5 : ",divisible_by_5)

greater_than_50 = [ item for item in li if (item>50)]
print("Greater than 50 list : ",greater_than_50)