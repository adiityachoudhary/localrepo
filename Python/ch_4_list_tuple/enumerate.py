# enumerate give both index and element

fruits=["apple","banana","grapes","oranges"]

for index, item in enumerate(fruits, start=1):    #start=1  will start the index from 1 otherwise the default will start from 0
    print(index, item)
