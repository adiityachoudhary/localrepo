#disctionary is a collection of key value pairs 
# it is unordered
# it is indexed
# it is mutable
# cannot contain duplicate keys

marks={
    "Harry":95,
    "Rohan":85,
    "Rohit":75,
    "Rahul":65
}

print(marks)
print(type(marks))

print("Length of dictionary marks : ",len(marks))


print("Marks of Harry : ", marks["Harry"])

print(marks.items())