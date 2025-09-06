#readlines - returns all the lines from a file in a LIST

f=open("Python\\ch_9_file_IO\\4_file_functions.txt","r")

#f.readlines() in a LIST

data=f.readlines()
print(data)

#printing each line
for item in data:
    print(item)

f.close()