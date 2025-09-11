a={
    "key":"value",
    "harry":"IIT",
    "marks":100,
    "l1":[1,2,3,4],
    2024:"Leap Year"
}

print(a)

print(a["harry"])

print(a.items())  #returns a list of (key , value) tuples

print(a.keys())     #returns a list of keys

print(a.values())   #returns a list of values



print(a["harry"])   #this will aslo return the value of the given key but if not found it will return a keyerror unkile get() which return N
print(a.get("harry"))  #if a.get() finds the key it will return its value
print(a.get("rohan"))  #else if a.get() doesn't find the key it will return None

#a.update({"key":"value"}) updates the dictionary with the supplied key value pairs 
#we can also add new key value pairs in the method
# a.update({"key":"val"}) changes the original dictionary since it is a mutable datatype
a.update({"harry":"IIT KGP","iitian": True,"marks":"99"})
print(a)

# clear() to clear all the contents of a dictionary
# a.clear()
# print(a)



# d.pop()  deletes the selected key 
d={
    "a":1,
    "b":2,
    "c":3,
    "z":26
}

d.pop("c")  #this will delete    "c":3
print(d)

# d.popitem() only deletes the last inserted key:value pair
d.popitem()
print(d)
