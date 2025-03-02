# name: ariya kawamura
# date: 2023-11-02
# purpose: this program will ask the user for their name age and favorite number
# less than 10, this program should have exceptional error handling

# askName asks is a function that asks user input for name
def askName():
    # this loops until we can get passed all of the errors until we get to the bottom else statement which returns
    # that it was successful
    while True:
        try:
           userName = input("Please enter your name: ")
           for char in userName:
               # iddigit checks for anoy integers in the name
                if char.isdigit():
                    raise ValueError("Error the name you entered has numbers")
               # checks if there is onlt 1 or less characters
           if len(userName) <= 1:
               raise ValueError("Error you entered a name that is less than or equal to 1 character")
        except ValueError as error:
            print(error)
        else:
            return print("you entered your name correctly thank you ", userName, "!")

# function asks for age
def askAge():
    while True:
        try:
            userAge = input("What is your age: ")
            # if age is bigger than 110 or smaller than 0 it raises error
            if int(userAge) > 110 or int(userAge) < 0:
                raise ValueError("You entered a number higher larger than 110 or smaller than 0 try again")
        except ValueError as error:
            print(error)
        else:
            return print("You entered you age correctly thank you your age is ", userAge, "!")

def askFavourite():
    while True:
        try:
            userFavNumber = input("Enter your favourite number: ")
            # isalpha checks for alphabets int the int
            if userFavNumber.isalpha():
                raise ValueError("Error you did not enter a integer try again")
            # we then check convet to int to check if userfavnumber is smaller than 1 or bigger than 10 to raise error
            if 0 >= int(userFavNumber) or int(userFavNumber) > 10:
                raise ValueError("Error you entered a number bigger than 10 or smaller than or equal to 0 ")
        except ValueError as error:
            print(error)
        else:
            return print("You entered your favourite number ", userFavNumber)

# main calls all functions
def main():
    askName()
    askAge()
    askFavourite()

main()
