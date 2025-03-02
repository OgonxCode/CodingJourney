# Ariya Kawamura 2023-09-27 this program measures a object in kg and checks if it is too heavy or too light

massOfObject = (float(input("what is the mass of your object: ")))

GRAVITATIONALACCELERATION = 9.81
# this calculation multiplies user inputted mass times the gravitational acceleration
weightOfObject = massOfObject * GRAVITATIONALACCELERATION

# this if statement checks if the Object is too heavy or light and if it passes all tests it prints the calcuation
if weightOfObject < 100:
    print("Your object is too light")
elif weightOfObject > 500:
    print("Your object is too heavy")
else:
    print("Your object is " + str(weightOfObject) + " Newtons")
