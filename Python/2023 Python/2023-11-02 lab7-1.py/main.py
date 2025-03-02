# author: Ariya kawamura
# Date: 2023-11-01
# purpose: this code rolls a 20 sided dice and with a +4 modifier to see the rates of the rolls
# after the results are recorded into a file it converts the statistics into the histogram of
# difficulties and writes it in the same OUTPUT.txt file
import math
import random

# this rolls a 20 sided dice
def rollDice():
    roll = random.randint(1, 20)
    return roll

# this rolls the skill bonus multiplier
def skillBonus():
    skillRoll = random.randint(1, 4)
    return skillRoll

# this checks the total dice rolls and adds one to each correlating difficulty
# third array being 25 and second being 20 and so on
def difficultyChecker(totalPoints, difficulties):
    if totalPoints >= 30:
        difficulties[0] += 1
        difficulties[1] += 1
        difficulties[2] += 1
        difficulties[3] += 1
        difficulties[4] += 1
        return difficulties
    elif 25 <= totalPoints < 30:
        difficulties[0] += 1
        difficulties[1] += 1
        difficulties[2] += 1
        difficulties[3] += 1
        return difficulties
    elif 20 <= totalPoints < 25:
        difficulties[0] += 1
        difficulties[1] += 1
        difficulties[2] += 1
        return difficulties
    elif 15 <= totalPoints < 20:
        difficulties[0] += 1
        difficulties[1] += 1
        return difficulties
    elif 10 <= totalPoints < 15:
        difficulties[0] += 1
        return difficulties
    else:
        return difficulties

# astriks function converts the final numbers of difficulties into amount of astriks to create
# then we floor it so it is not a decimal and return the floored amount of astriks
def astriks(difficulties):
    astrik10 = difficulties[0] / 50
    astrik15 = difficulties[1] / 50
    astrik20 = difficulties[2] / 50
    astrik25 = difficulties[3] / 50
    astrik30 = difficulties[4] / 50
    return (math.floor(astrik30) * '*',
            math.floor(astrik25) * '*',
            math.floor(astrik20) * '*',
            math.floor(astrik15) * '*',
            math.floor(astrik10) * '*')

def main():
    difficulties = [0,0,0,0,0]
    records = open("OUTPUT.txt", "a")
    AMOUNTOFROLLS = 1000

    # loop to a 1000 calculate totalpoints from all variables in the rolls and records it to OUTPUT.txt

    for i in range(1, AMOUNTOFROLLS):
        totalPoints = 4
        totalPoints = totalPoints + rollDice() + skillBonus()
        difficultyChecker(totalPoints, difficulties)
        print(totalPoints)
        records.write(str(totalPoints) +' ')

    # the rest is printing in console and writing to file
    records.write("\n")
    records.write(str(difficulties))
    print("The amount of difficulties passed have been saved to OUTPUT.txt")

    print(difficulties)

    astrikStars = astriks(difficulties)
    astrik30s = astrikStars[0]
    astrik25s = astrikStars[1]
    astrik20s = astrikStars[2]
    astrik15s = astrikStars[3]
    astrik10s = astrikStars[4]
    records.write(str(astrik30s) + '\n' +
                  str(astrik25s) + '\n' +
                  str(astrik20s) + '\n' +
                  str(astrik15s) + '\n' +
                  str(astrik10s) + '\n')
    print(astrik30s, '\n',
          astrik25s, '\n',
          astrik20s, '\n',
          astrik15s, '\n',
          astrik10s)

    records.close()
main()
