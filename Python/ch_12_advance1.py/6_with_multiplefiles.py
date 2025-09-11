"""You can now use multiple context managers in a single with statement more cleanly 
using the 
parenthesised context manager 
with ( 
open('file1.txt') as f1, 
open('file2.txt') as f2 
): 
# Process files """

with (open("Python\\ch_12_advance1.py\\6_with_file1.txt","r") as f1, 
    open("Python\\ch_12_advance1.py\\6_with_file2.txt","w+") as f2):
        read1=f1.read()

        f2.write(f"Copy from file 1 : {read1}\n")

        f2.seek(0)  #to set the cursor to the starting of the file
        print(f2.read())