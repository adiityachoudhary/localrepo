# New operators | and |= allow for merging and updating dictionaries. 
# other way of doing this by using dict1.update(dict2) then dict2 will be merged in dict1

dict1={"harry" : 123, "rohan" : 456}
dict2={"snehil" : 789, "saurav" : 987}

merged = dict1 | dict2  # | (Pipe operator) will merge two dictionaries
print(merged)


dict3={"sunil" : 100, "ramesh" : 101}
dict4={"rajesh" : 102, "dinesh" : 103}

dict3 |= dict4  # |= (Pipe operator) will merge the second dictionary in the first
print(dict3)

