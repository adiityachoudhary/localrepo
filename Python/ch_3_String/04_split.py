# a.split(" ") in Python
# split() is a string method in Python.
# It breaks a string into a list using the given separator.
# In your case, the separator is a single space " ".

str= "Python is powerful"

list_by_split = str.split(" ")

print(list_by_split)

for each_word in list_by_split:
    print(each_word)