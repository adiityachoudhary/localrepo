# censor words from the list
# censor = [monstrous, cursed, greed, venomous, savage, bloodthirsty, stench, corrupt ]

filename="Python\\ch_9_file_IO\\practice_set\\5_censor.txt"
with open(filename, "r+") as f:
    data=f.read()  #file contents have been saved in data as string
    updated_file=data

    censor = ["monstrous", "cursed", "greed", "venomous", "savage", "bloodthirsty", "stench", "corrupt" ]
    
    for word in censor:
            if word in data:    #checked if donkey is present or not
                updated_file=updated_file.replace(word,"######")   #applied string function to replace donkey to #
                print(f"{word} has been censored")
            else:
                print("No uncensored words found")

    f.seek(0)  #set pointer to starting of the file
    f.write(updated_file)
    