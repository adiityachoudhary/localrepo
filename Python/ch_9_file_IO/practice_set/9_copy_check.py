#check if two files are identical

with open("Python\\ch_9_file_IO\\practice_set\\8_this.txt", "r") as f1:
    data1 = f1.read()
    
with open("Python\\ch_9_file_IO\\practice_set\\8_this_copy.txt", "r") as f2:
    data2 = f2.read()

if (data1==data2):
    print("YES, Both files are identical")
else:
    print("NO, Both files are NOT identical")
