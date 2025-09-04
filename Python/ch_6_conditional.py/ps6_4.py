#check if less than 10

user=input("Enter your username : ")

length=len(user)
print(length)

if (length<10):
    print("your username contains less than 10 characters")
elif (length>=10):
    print("your username contains more than 10 characters")