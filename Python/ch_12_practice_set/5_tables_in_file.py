"""5. Store the multiplication tables generated in problem 3 in a file named Tables.txt."""

num= int(input("Enter a number : "))

table = [ f"{num} x {i} = {num*i}" for i in range(1,11)]

with open("Python\ch_12_practice_set\Tables.txt","a") as f:
    f.write(f"\nTable of {num}\n")
    for line in table:
        f.write(f"{line}\n")