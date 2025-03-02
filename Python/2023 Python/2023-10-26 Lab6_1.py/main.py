# author: Ariya Kawamura
# date: 2023-10-25
# purpose: create a war type game based on armies that will battle between rounds that uses user input to make desicions
# in the game

import random

cpuList = [2]
userArmy = []


# asks the user to name each member make you invested in the game
def soldiercreator():
    for i in range(0, 7):
        userArmy.append(input("Enter your soldiers name: "))

    print("Your army has: ", userArmy)

def endGameCheck():
    armiesAlive = True
    while armiesAlive:

        if len(userArmy) == 0:
            print("Attackers armies have died you lost :(")
            armiesAlive = False

        elif len(cpuArmy) == 0:
            print("Defenders armies have died you won! :)")
            armiesAlive = False

def roll():
    die = random.randint(1, 6)
    return die

def cpuRoll():
    if len(cpuArmy) >= 2:
        return random.randint(1,6), random.randint(1,6)
    elif len(cpuArmy) < 2:
        return random.randint(1,6), 0

def soldierPop():
    global userRolls
    global cpuArmy
    global cpuRolls
    global userArmy
    for i in range(min(len(userRolls), len(cpuRolls))):  # Loop up to the minimum length
        if userRolls[i] > cpuRolls[i]:
            cpuArmy.pop()
            return print("Enemies remaining army is: ", cpuArmy)
        elif userRolls[i] < cpuRolls[i]:
            userArmy.pop()
            return print("Your remaining army is: ", userArmy)
        else:
            return print("It's a tie! No one loses a member.")

def main():
    global cpuRolls
    global userRolls
    global cpuArmy
    cpuArmy = ["WolfGang", "Fritz", "Wilhelm", "Johan", "Ludwig", "Gunther"]
    soldiercreator()

    print("Rules: type 1, 2 or 3 for the amount of dice you want to roll (you cannot roll more dice than the size of"
          " your army) type -1 to give up/ retreat")

    armiesAlive = True
    while armiesAlive:

        userRoll = int(input(print("Type 1, 2 or 3 the amount of dice to roll or -1 to give up: ")))


        if userRoll == -1:
            print("You gave up the game will restart")
            playAgain = input("Do you want to play again yes or no: ")
            if playAgain.strip().lower() == "yes":
                userArmy.clear()
                cpuArmy = ["WolfGang", "Fritz", "Wilhelm", "Johan", "Ludwig", "Gunther"]
            continue


        if userRoll == 1:
            die1 = roll()
            userRolls = [die1]
        elif userRoll == 2:
            die1 = roll()
            die2 = roll()
            userRolls = [die1,die2]
        elif userRoll == 3:
            die1 = roll()
            die2 = roll()
            die3 = roll()
            userRolls = [die1,die2,die3]

        if userRoll == 1:
            print("You just rolled a ", die1)
        elif userRoll == 2:
            print("You just rolled a ", die1, " and ", die2)
        elif userRoll == 3:
            print("You just rolled a ", die1, " and ", die2," and ", die3)

        cpuRolls = cpuRoll()

        print("The enemies have rolled ", cpuRolls)

        soldierPop()

        endGameCheck()

        if len(userArmy) > 0 and len(cpuArmy) > 0:
            playAgain = input("Do you want to play again? yes or no: ")
            if playAgain.strip().lower() == 'yes':
                userArmy.clear()
                cpuArmy = ["WolfGang", "Fritz", "Wilhelm", "Johan", "Ludwig", "Gunther"]

main()
