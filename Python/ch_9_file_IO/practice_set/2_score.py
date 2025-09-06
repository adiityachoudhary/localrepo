import random

score=random.randint(1,10)
print(score)
filename="Python\\ch_9_file_IO\\practice_set\\2_score.txt"
with open(filename,"r+") as f:
    data=f.read()
    if score>int(data):
        f.seek(0)
        f.write(str(score))
        print("High Score Updated")