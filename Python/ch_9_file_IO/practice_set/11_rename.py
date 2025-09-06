# rename a file 

import os

old_name="Python\\ch_9_file_IO\\practice_set\\11_renamed_file.txt"
new_name="Python\\ch_9_file_IO\\practice_set\\11_renamed_by_python.txt"

os.rename(old_name,new_name)

print(f"{old_name} renamed to : {new_name}")