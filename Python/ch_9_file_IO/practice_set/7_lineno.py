#find the line no. where python is present

filename="Python\\ch_9_file_IO\\practice_set\\6_find_python.log"

with open(filename,"r") as f:

    found_at_line=[]
    count=0

    data=f.readline()

    while (data !=""):
        if "python" in data.lower():
            count+=1
            found_at_line.append(count)
        data=f.readline()


print(f"Python has been found at line {found_at_line}")