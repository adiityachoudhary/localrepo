# 1 - Snake   Snake wins over Water
# 2 - Water  Water wins over Gun
# 3 - Gun    Gun wins over Snake

import random
import time

choice={
       1:"Snake",
       2:"Water",
       3:"Gun"
}

#computer's choice
computer_choice = random.randint( 1, 3 )

#user's input
option = { "s" : 1, "w" : 2, "g" : 3 }
user_input = option[input("Enter your option\ns : Snake\nw : Water\ng : Gun\n=> ")]
print(f"You have chosen : {choice[user_input]}")

# artificial delay
for i in range(0,4):
    time.sleep(0.25)
    print(".", end="")   

print(f"\nComputer has chosen : {choice[computer_choice]}")

#decision
# if((user_input==1 and computer_choice==2) or (user_input==3 and computer_choice==1)  or (user_input==2 and computer_choice==3)):
#     result="Yon WON!!"
# elif(user_input==computer_choice):
#         result="TIE!!"
# else:
#         result="You LOST!!"

x=computer_choice-user_input
if(x==1 or x==-2):
    result= "You WON!!"
elif(x==0):
    result="TIE!!"
else:
    result="You LOST!!"

print(result)