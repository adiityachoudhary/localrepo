# generate tables in files
import time 
start_time=time.time()

def generateTable(n):
    table=""   # declaring table as a STRING data type
    #generating table n
    for i in range(1,11):
        table += f"{n} x {i} = {n*i}\n"

    #writing table in each file
    with open(f"Python\\ch_9_file_IO\\practice_set\\tables_CWH\\table_{n}.txt", "w") as f:
            f.write(table)


for i in range(2,20):
    generateTable(i)


end_time=time.time()
print(f"Execution time : {end_time-start_time :.6f} seconds")