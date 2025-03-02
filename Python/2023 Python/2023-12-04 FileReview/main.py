import random


def playGame():
    go = True
    while go:
        userInput = input("welcome to gamble city type yes to start playing or no to close the program: ")
        if userInput.lower().strip() != "yes" and userInput.lower().strip() != "no":
            print("you did not enter yes or no")
        elif userInput.lower().strip() == "yes":
            return True
        elif userInput.lower().strip() == "no":
            exit()


def generateRandomNumber():
    houseNum = random.randint(1,21)
    return houseNum

def userNum(useragain):
    go = True
    while go:
        userNum = random.randint(1,21)
        playagain = input("you got the number ", userNum, " would you like to roll again?")
        if playagain.lower().strip() != "yes" and playagain.lower().strip() != "no":
            print("")




def main():
    file = open("Results.txt", 'a')
    playGame()





main()
