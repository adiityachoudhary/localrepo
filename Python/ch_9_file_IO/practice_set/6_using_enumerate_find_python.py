# check if "python" is present in the log file or not


filename="Python\\ch_9_file_IO\\practice_set\\6_find_python.log"

with open(filename,"r") as f:

    # data= f.read()
    count=[]

    for line_no, line in enumerate( f, start=1):   #here enumerate will automatically iterate f and No need to save it in data=f.read()
        if "python" in line.lower():
            count.append(line_no)

print(f"Python is present at {count}")

