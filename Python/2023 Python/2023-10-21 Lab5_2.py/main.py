# Author: Ariya Kawamura
# Date: 2023-10-21
# Purpose: This program is a guessing game for a number between 1-100 and lets you know if the number is too high
# or too low until you guess the correct number

import random

def playGame(targetNumber):
    numberOfGuesses = 0
    # asks in a loop for a input and if input is zero user quits the game
    while True:
        userGuess = int(input("Enter a number between 1 and 100, or 0 to quit: "))
        if userGuess == 0:
            print("Thanks for playing!")
            return 0
        # increments number of guesses by one each guess
        numberOfGuesses += 1
        # if input  is too small or too big lets user know
        if userGuess < targetNumber:
            print("Too low, try again")
        elif userGuess > targetNumber:
            print("Too high, try again")
        else:
            # if the user guesses the right number it returns guesses and prints
            print(f"Congratulations! You guessed the right number! It took you {numberOfGuesses} guesses!")
            return numberOfGuesses

def main():
    # main sets replay to false if the user chooses to quit ending the game
    replay = True
    while replay:
        targetNumber = random.randint(1, 100)
        guesses = playGame(targetNumber)
        if guesses == 0:
            replay = False

main()







