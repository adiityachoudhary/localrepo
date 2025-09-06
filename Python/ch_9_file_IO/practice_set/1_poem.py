#check if the file contains "twinkle or not"

with open("Python\\ch_9_file_IO\\practice_set\\poems.txt","r") as f:
    data=f.read()
    if "twinkle" in data:
        print("Yes, poems.txt contains 'twinkle'")
    else:
        print("NO, poems.txt does not contains 'twinkle'")
