"""1. Write a program to open three files 1.txt, 2.txt and 3.txt if any these files are not 
present, a message without exiting the program must be printed prompting the same."""

try:
    with open("Python\\ch_12_practice_set\\1.txt","r")as f1:
        r1=f1.read()
except FileNotFoundError as err:
    print(err)

try:
    with open("Python\\ch_12_practice_set\\2.txt","r")as f2:
        r2=f2.read()
except FileNotFoundError as err:
    print(err)

try:
    with open("Python\\ch_12_practice_set\\3.txt","r")as f3:
        r3=f3.read()
except FileNotFoundError as err:
    print(err)


print("Thank you!! Program executed successfully!!")