# f=open("Python\\ch_9_file_IO\\5_with_statement.txt","w")
# f.write("Hey I am using file IO")
# f.close()

# we can implement the above using with statement and we don't have to f.close()

with open("Python\\ch_9_file_IO\\5_with_statement.txt","w+") as f:
    f.write("Hey I am using With statement now")
    f.seek(0) #seek(0)  will set the pointer to the starting of the file
    print(f.read())

# the file gets automatically gets closed when we get out of the with statement

