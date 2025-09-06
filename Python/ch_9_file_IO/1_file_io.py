#file IO 
# f = open("filename.txt", "mode of opening (read mode by default)")
# data = f.read() 
# print(data)
#reading modes - by default it is set to "r" i.e. read mode
# r - read mode reads from file
# w - write mode removes everything and write new
# a - append mode adds new text at the end of the file

email= input("Enter your email : ")

#open the file
f = open("Python\\ch_9_file_IO\\1_file_io.txt", "a")
#write in a file
f.write(f"\n{email}")
# close a file
f.close()


# opening a file to read
f = open("Python\\ch_9_file_IO\\1_file_io.txt", "r")
# reading a file and saving the contents in variable data
data = f.read() 
print(data) # printing the file contents
f.close()  # close the file
