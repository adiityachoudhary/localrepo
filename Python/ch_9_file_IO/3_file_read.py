
f=open("Python\\ch_9_file_IO\\2_file_write.txt","r")
data=f.read()

count=data.count("Harry") #count how many time "Harry is present in the file"
    
print(count)
f.close()