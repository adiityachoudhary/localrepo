#length
a='hello'
l=len(a)  #len(string fuction)
print('Length of string "hello" : ',len(a))

#string.endswith('condition')
b='harry'
print(b.endswith('rry')) #it checks if the string ends with the 'condition' if it does it return True else False
print(b.startswith('ha')) #it checks if the string starts with the 'condition' if it does it return True else False


#case in python
c='helloworld'
d='CODE WITH HARRY'
print("Upper : \t",c.upper())
print("Lower : \t",d.lower())
print("Capitalize : \t",d.capitalize())
print("Title : \t",d.title())
print("Swapcase : \t",'PyThOn'.swapcase()) #it inverts the case 


#find() and count()
e='programming'
print(e.find('o')) #it gives the index of first occurence of the given character
print(e.count('m')) #it gives the repetition of the given character

#.replace(old word, new word)
f='good good weather'
newf=f.replace('good','bad') #here good will become bad
print(newf)
