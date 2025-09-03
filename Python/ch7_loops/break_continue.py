#  break -EXIT THE LOOP NOW
#  continue - SKIP THE ITERATION

for i in range(0,5):
    if(i==2):
        break  #this break statement will terminate the loop when the condition is met
    print(i)

print("\n")


for j in range(0,5):
    if(j==2 or j==4):
        continue  #continue statement will skips the iteration when the condition is met
    print(j)

 