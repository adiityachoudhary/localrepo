# overall 40%
# each subject 33%
# to pass

marks=[]

for i in range(0,3):
    marks.append(int(input(f"Enter marks of subject {i+1} : ")))

print(marks)

print("Total marks : ", sum(marks))

total_percentage=sum(marks)/3

if (total_percentage>=40):

    if( marks[0]>=33 and marks[1]>=33 and marks[2]>=33):
        print("You are pass")
        
    else: print("FAIL!! less than 33%")

else: print("FAIL!! less than 40% overall")

