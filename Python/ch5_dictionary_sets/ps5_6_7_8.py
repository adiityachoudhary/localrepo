#when we type same name 2 time the language typed in the last got updated the language by the d.update() function
# key is the identifier in a dictionary
# Q7 keys can't be same for two pairs
# Q8 but values can be same for two keys

d={}


for i in range(0,4):
    name=input("Enter your name : ")
    lang=input("Enter your language : ")
    d.update({ name : lang })

print(d)