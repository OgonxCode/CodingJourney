def fileName():
    keepRunning = True
    while keepRunning:
        try:
            makeFile = str(input("do you want to make a file yes or no: "))
            if str(makeFile).strip().lower() != 'yes' or makeFile != 'no':
                print('you did not enter yes or no please try again')
            elif str(makeFile) == 'yes':
                print("great lets create a file")
                return 1
            elif str(makeFile) == 'no':
                print("you will now exit this software")
                exit()
        except:
            print("Error your input is incorrect please try again")


def main():
    fileName()

main()

