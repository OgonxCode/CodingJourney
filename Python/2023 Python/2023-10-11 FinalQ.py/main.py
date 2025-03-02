print("This program will use the summation equation (x^2+x-2) and will add it to the same equation N number or times")
startingValue = int(input("enter a starting value for X (cannot be less than 0): "))
# (x^2+x-2) + itself until the statement hits the max value n which
numberOfRepetitions = int(input("enter the N (number of times) the equation will add to it self: "))

xValue = startingValue
sumsOfEquation = []
addedAnswers = 0

# Calculates and appends the answers to the list
for xValue in range(numberOfRepetitions):
    squaredValue = xValue * xValue
    equation = squaredValue + xValue - 2
    sumsOfEquation.append(equation)
    xValue = xValue + 1

# adds all of the equation answers from the list in one varibe to print
for i in  range(len(sumsOfEquation)):
    addedAnswers = addedAnswers + sumsOfEquation[i]
    i = i + 1
print(str(sumsOfEquation))
print("the summation of all the numbers are ", str(addedAnswers))