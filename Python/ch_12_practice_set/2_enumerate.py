"""2. Write a program to print third, fifth and seventh element from a list using enumerate function."""

l1 = [25,50,75,100,125,150,175]

for index,item in enumerate(l1, start=1):
    if (index%2!=0 and index!=1):
        print(index, item)
