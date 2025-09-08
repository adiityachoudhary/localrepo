import random

def game():
    score=random.randint(1,10)
    print("Current score : ",score)

    filename="Python\\ch_9_file_IO\\practice_set\\2_score.txt"
    #read the old score
    with open(filename,"r+") as f:
        hiscore=f.read()
        #if the file is empty the default hiscore will be 0
        if (hiscore != ""):
            hiscore=int(hiscore)
        else:
            hiscore=0

        #set a new hiscore
        if score>int(hiscore):
            f.seek(0)  #set the pointer to starting to write from the beginning of the file
            f.write(str(score))
            print("High Score Updated to : ",score)
        else:
            print("High Score remains : ",hiscore)
#function call
game()