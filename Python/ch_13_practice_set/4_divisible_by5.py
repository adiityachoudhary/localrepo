""" Write a program to filter a list of numbers which are divisible by 5."""

l1=[12,34,41,65,55,40,5]

div_by_5=list(filter(lambda x: x%5==0,l1))
print(div_by_5)