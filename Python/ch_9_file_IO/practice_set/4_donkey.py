#find donkey and censor it
# text file
# Humpty Dumpty sat on a donkey,
# Not on a wall but a stubborn donkey,
# The road was long with only donkey,
# All he could see was donkey, donkey!

word="donkey" 

filename="Python\\ch_9_file_IO\\practice_set\\4_donkey.txt"

with open(filename, "r+") as f:
    data=f.read()  #file contents have been saved in data as string
    
    if word in data.lower():  #checked if donkey is present or not
        f.seek(0)           #set pointer to starting of the file
        new_text=data.replace(word,"#"*len(word))        #applied string function to replace donkey to
        f.write(new_text)                   #writing new text in the file
        print(f"All {word} have been censored")
    else:
        print(f"No {word} found")