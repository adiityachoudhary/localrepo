#readline- read each line once at a time

f=open("Python\\ch_9_file_IO\\4_file_functions.txt","r")

#this will only print the first line from the file
# data=f.readline()
# print(data)

#print all the lines using f.readline()
# line1=f.readline()
# print(line1)
# line2=f.readline()
# print(line2)
# line3=f.readline()
# print(line3)
# line4=f.readline()
# print(line4=="")  #if all lines are over then last will be "" (null)



data=f.readline()
while not(data == ""):  #loop will terminate if it founds NULL " "
    print(data)
    data=f.readline()

f.close()