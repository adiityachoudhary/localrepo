# check if "python" is present in the log file or not


filename="Python\\ch_9_file_IO\\practice_set\\6_find_python.log"

with open(filename,"r") as f:
    data=f.read()
    if "python" in data.lower():
        print("Yes")
    else: 
        print("NO")
