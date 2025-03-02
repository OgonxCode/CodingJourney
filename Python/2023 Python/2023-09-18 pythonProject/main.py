import sys

name = "ariya"
age = 20
storeName = "Liquor Store"

catalog1 = "Bubba Vodka"
price1 = 25

catalog2 = "Trash Rum"
price2 = 15

catalog3 = "Serial Killer Beer"
price3 = 35

balance = 1852

if age >= 19 and storeName == "Liquor Store":
    print(name + " is able to visit the " + storeName)
    visitStore = True
else:
    print(name + " is not able to visit the " + storeName)
    visitStore = False


if visitStore == True:
    print("Welcome what would you like to buy we have " + catalog1 + " for " + str(price1) + "$ " + catalog2 + " for " + str(price2) + "$ " + catalog3 + " for " + str(price3) + "$ ")
    customerChoice = input("which one would you like to purchase? Bubba Vodka or Trash Rum or Serial Killer Beer")
    userChoice = str(customerChoice)

elif not visitStore:
   print("you were unable to buy from the store")
   sys.exit()



if userChoice ==  catalog1:
   balance = balance - price1
   print("you have purchased " + catalog1 + " Have a great day! your remaining balance is " + str(balance))

elif userChoice == catalog2:
   balance = balance - price2
   print("you have purchased " + catalog2 + " Have a great day! your remaining balance is " + str(balance))

elif userChoice == catalog3:
   balance = balance - price3
   print("you have purchased " + catalog3 + " Have a great day! your remaining balance is " + str(balance))
else:
    print("none")


