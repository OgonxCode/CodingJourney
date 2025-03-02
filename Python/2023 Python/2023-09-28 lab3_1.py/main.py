# Written by Ariya Kawamura this program calculates the cost of travel(Gas and tickets) 2023-09-27
# this asks the user how far their travel will be
distance = int(input("How many kilometers will you be travelling: "))
# this asks the user how fast they will be traveling in terms of km per h
speed = int(input("how fast are you travelling in terms of km/h: "))
# this is the cost of travel
costOfTravel = 0

# this calculates the time it takes by dividing distance by the speed
time = distance / speed

# it takes 5L per hour, fuelUsed multiplies the time times 5 to estimate the fuel consumption
FUEL_USED = 5 * time
# gasPrice gets the fuelUsed valur and multiplies it by the current gas rate which is 2.13
GAS_PRICE = FUEL_USED * 2.13

# Since every 3 hours you will get a ticket, time is divided by three to see how many tickets the user will receive
probabilityOfTickets = int(time / 3)
costOfTickets = 0

# these if statements calculate how much the tickets will cost based on the speed of the vehicle
if 110 < speed <= 120:
    costOfTravel = GAS_PRICE
    costOfTickets = probabilityOfTickets * 200

elif speed > 120:
    costOfTravel = GAS_PRICE + probabilityOfTickets * 400
    costOfTickets = probabilityOfTickets * 400
else:
    costOfTravel = GAS_PRICE

# for print i have used "round()" to round the number down so it is more readable rather than having many decimals
print("You took " + str(round(time)) + "hours to get to your destination")
print("Your cost of travel will be " + str(round(costOfTravel)) + " and you received a $" + str(round(costOfTickets)) + "fine in tickets")
print("You total cost was " + str(round(costOfTickets + costOfTravel)))
