"""2. Write a program to input name, marks and phone number of a student and format it 
using the format function like below: 
“The name of the student is Harry, his marks are 72 and phone number is 99999888”"""

name = input("Enter name :")
marks = int(input("Enter marks :"))
phone = int(input("Enter phone no. :"))

print("The name of the student is {0}, his marks are {1} and phone number is {2}".format(name, marks, phone))

#new method
# print(f"The name of the student is {name}, his marks are {marks} and phone number is {phone}")