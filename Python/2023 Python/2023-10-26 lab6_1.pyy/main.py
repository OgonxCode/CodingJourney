# author: Ariya Kawamura
# date: 2023-10-25
# purpose: create a war type game based on armies that will battle between rounds that uses user input to make desicions
# in the game

import random

# This rolls n number of dice and returns it as a list
def roll_dice(n):
    result = []
    for i in range(n):
        result.append(random.randint(1, 6))
    return result

# this prints stats and info of rounds
def print_results(roundNum, attackerArmies, defenderArmies, attackerRolls, defenderRolls, winner):
    print("Round: ", roundNum, "Results: ")
    print("Attackers (", len(attackerArmies),"armies)" )
    for roll in attackerRolls:
        print("you rolled a", roll)
    print("Defenders (", len(defenderArmies), "armies)")
    for roll in defenderRolls:
        print("defenders rolled a", roll)
    print(winner," wins, Attacker has ", len(attackerArmies), " armies and Defenders have", len(defenderArmies), " armies")

def main():
    attackerArmies = [1, 1, 1, 1, 1, 1, 1]
    defenderArmies = [1, 1, 1, 1, 1, 1]

    roundNum = 1
    # loops until attacker has one army left or defender has no army
    while len(attackerArmies) > 1 and len(defenderArmies) > 0:
        print("Round ", roundNum)
        attackerDice = int(input("Enter 1,2 or 3 for the number of dice to roll or -1 to retreat: "))

        if attackerDice == -1:
            print("You chose to retreat battle ends with no losses")
            break
        # checks users input
        if attackerDice not in [1,2,3] or attackerDice > len(attackerArmies):
            print("Wrong input please try again.")
            continue
        # tells how many defenders can roll based on how much they have left
        if len(defenderArmies) > 1:
            defenderDice = 2
        else:
            defenderDice = 1
        # rolls dice
        attackerRolls = roll_dice(attackerDice)
        defenderRolls = roll_dice(defenderDice)
        # max() finds the highest amount from the rolls
        maxAttackerRoll = max(attackerRolls)
        maxDefenderRoll = max(defenderRolls)
        # declares the winner of the round based on highest rolls and pops the loser team
        if maxAttackerRoll > maxDefenderRoll:
            defenderArmies.pop()
            print_results(roundNum,attackerArmies,defenderArmies,attackerRolls,defenderRolls,"Attackers")
        elif maxAttackerRoll < maxDefenderRoll:
            attackerArmies.pop()
            print_results(roundNum, attackerArmies, defenderArmies, attackerRolls, defenderRolls, "Defenders")
        else:
            print_results(roundNum, attackerArmies, defenderArmies, attackerRolls, defenderRolls, "Its a tie")

        roundNum += 1

    if len(attackerArmies) == 1:
        print("attackers have lost all armies defenders win!")
    elif len(defenderArmies) == 0:
        print("defenders have lost all armies attackers win!")

main()