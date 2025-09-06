# readlines() - This will return a LIST
# readline() - read each line at a time


f=open("Python\\ch_9_file_IO\\4_file_functions.txt","r")

# f.readline() will read only one line at a time
print(f.readline())

# f.readlines() will return all the lines in a list saved in variable data 
data= f.readlines()  
print(data, type(data))

f.close()


