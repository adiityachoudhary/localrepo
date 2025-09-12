"""3. Write a list comprehension to print a list which contains the multiplication table of a user entered number. """

num= int(input("Enter a number : "))

table = [ f"{num} x {i} = {num*i}" for i in range(1,11)]
print(table)