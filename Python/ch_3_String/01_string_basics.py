#String is and immutable datatype it cannot be modified but it can be reassigned


#     string = ' H a r r y'
#        index-  0 1 2 3 4
#(-ve)indices   -5-4-3-2-1


s='Code with Harry'
#  0123456789101112
length=len(s) #len(string) - function that calculates string length
print(length)

print(len('Hello'))

print(s[0:4])  #s[inclusive index: exclusive index]
print(s[5:9])  #from index 5 to 8
print(s[10:])

#negative indices
n='python'
#  012345
print(n[:4])
print(n[-4:-1]) #negative indices
print(n[2:5])  #positive indices

print(n[:4]) #  n[0:4]    empty before colon means 0 here 
print(n[2:]) #  n[2:6]    empty before colon means len(string)


#skip value
word='abcdefghijklmnopqrstuvwxyz'
#this will skip the letter by 1 letter
print(word[0:26:2]) # from : to : no. of elements to skip
print(word[0:10:4]) #this will skip 4 letters

str='012345678'
print(str[0:9:4])