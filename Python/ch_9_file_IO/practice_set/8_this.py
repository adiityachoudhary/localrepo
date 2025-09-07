#make acopy of another file

with open("Python\\ch_9_file_IO\\practice_set\\8_this.txt", "r") as f1:
    data = f1.read()

with open("Python\\ch_9_file_IO\\practice_set\\8_this_copy.txt", "w") as f2:
    f2.write(data)