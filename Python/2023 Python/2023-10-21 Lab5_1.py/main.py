# author: Ariya Kawamura
# date 2023-10-18
# Purpose of this program is to calculate the cost of the materials for the constructions company
import priceCalc
def priceCalculator():
    retry = True
    # this function asks for input and receives the variables from priceCalc, then checks if the variables are smaller
    # than or equal to zero to see if the variable has values if it does it returns the value and restarts if it doesn't
    while retry:
        material = input("Choose the material that you would like to use (stone, brick, or wood): ")
        costPerMeter, hoursPerMeter, costPerHour = priceCalc.matsCalculator(material)

        if costPerHour and hoursPerMeter and costPerHour <= 0:
            print("You did not enter brick, stone or wood. Please try again.")
            retry = True
        elif costPerHour and hoursPerMeter and costPerHour >= 1:
            return costPerMeter, costPerHour, hoursPerMeter

def main():
    wallRetry = True
    costPerMeter, hoursPerMeter, costPerHour = priceCalculator()
    # asks for the length of the wall then checks if it is a negative number then asks re-enter input
    while wallRetry:
        metersOfWall = int(input("How long will the wall your wall be enter a number: "))
        if metersOfWall < 0:
            print("You cannot have a negative amount please try again")
        elif metersOfWall > 0:
            # multiplies metersOfWall by costPerMeter. Then metersOfWall by costPerHour to get the amount of hours to multiply by costPerHour
            costOfMats = metersOfWall * costPerMeter
            labourCosts = hoursPerMeter * metersOfWall * costPerHour
            return print("The cost of materials are: $", costOfMats, " The labour costs are: $", labourCosts," The total cost of the wall is $",labourCosts + costOfMats )

main()
