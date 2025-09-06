#make acopy of another file

with open("Python\\ch_9_file_IO\\practice_set\\8_this.txt", "r") as f:
    data = f.read()
with open("Python\\ch_9_file_IO\\practice_set\\8_this_copy.txt", "w") as f:
    f.write(data)