#write tables 2 to 20 in a folder 

start=2
end=20

def table(n):
    each_table=[]
    for i in range(1,11):
       each_table.append(f"{n} x {i} = {n*i}") #each line will store as element in list each_table[]
    return each_table

for i in range(start,end+1):
        filename=(f"Python\\ch_9_file_IO\\practice_set\\tables_for_13yold\\table_{i}.txt")
        with open(filename,"w") as f:
            for item in table(i):
                f.write(f"{item}\n")