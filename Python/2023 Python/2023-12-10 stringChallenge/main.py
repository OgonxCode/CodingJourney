def userInput():
    go = True
    while go:
        try:
            numbers = input("Please enter a number: ")
            if numbers.isalpha():
                raise ValueError
            return numbers

        except ValueError:
            print("you entered a wrong value")

def numSep(numToSep):
    listNum = []
    for ch in numToSep:
        listNum.append(ch)
    return listNum

def addNum(listNum):
    total = 0
    for i in range(len(listNum)):
        total = total + int(listNum[i])

    return total

def main():
    number = userInput()
    listNum = numSep(number)
    total = addNum(listNum)

    print(listNum)
    print(total)



main()