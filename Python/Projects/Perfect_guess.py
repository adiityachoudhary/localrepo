"""PROJECT 2 – THE PERFECT GUESS 
We are going to write a program that generates a random number and asks the user to 
guess it. 
If the player’s guess is higher than the actual number, the program displays “Lower 
number please”. Similarly, if the user’s guess is too low, the program prints “higher 
number please” When the user guesses the correct number, the program displays the 
number of guesses the player used to arrive at the number. 
Hint: Use the random module."""


#The perfect guess
from random import randint
num=randint(1,100)
print("Welcome to the Perfect Guess game")

user_input=-1 #to run the loop for the first time because the range is 1-100 and -1 can't hit the condition

no_of_guess=1 #the least no. of attempt is 1

while (user_input != num ):
    user_input=int(input("Input : "))
    if (num>user_input):
        print("Higher No. Please")
        no_of_guess+=1
    elif (num<user_input):
        print("Lower No. Please")
        no_of_guess+=1

print(f"You have guessed the no. correctly in {no_of_guess} guesses")