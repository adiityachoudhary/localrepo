#find donkey and censor it


filename="Python\\ch_9_file_IO\\practice_set\\4_donkey.txt"
with open(filename, "r+") as f:
    data=f.read()  #file contents have been saved in data as string
    
    if "donkey" in data:  #checked if donkey is present or not
        f.seek(0)           #set pointer to starting of the file
        f.write(data.replace("donkey","######"))    #applied string function to replace donkey to #
        print("All donkeys have been censored")
    else:
        print("No donkey found")