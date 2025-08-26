import os

# Specify the folder path (use '.' for current directory)
folder_path = "."

# List all files and directories
contents = os.listdir(folder_path)



print(f"Contents of '{folder_path}':")  #here f is used in replacement of concatenation 

#prints contents of the directory
for item in contents:
    print(item)
