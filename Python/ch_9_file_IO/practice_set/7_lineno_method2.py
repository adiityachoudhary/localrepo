#find the line no. where python is present

word="python"

filename="Python\\ch_9_file_IO\\practice_set\\6_find_python.log"
with open(filename,"r") as f:
    lines=f.readlines()   #this will read all the lines and save it as a list with each line as its elements

    line_list=[]    #empty list which stores the line no. if word is found
    line=1          #line starts with 1

    for each_line in lines:
        if word in each_line.lower():
            line_list.append(line)
        line+=1

print(f"{word.capitalize()} is present at {line_list}")