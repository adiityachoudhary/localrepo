#else can be paired with for loop if the loops get exhausted else block will executed

li=[22,33,44]

for item in li:
    print(item)
else:
    print("Done, 'else block' will execute when the loop exhausts")