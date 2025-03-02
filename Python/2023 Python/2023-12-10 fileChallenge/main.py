def inputAge():
    go = True
    while go:
        try:
            userAge = input("how old are you?: ")
            if userAge.isalpha():
                raise ValueError
            else:
                return userAge
        except ValueError:
            print("you did not enter a correct value")


def main():
    userAge = inputAge()
    if int(userAge) >= 18:
        print("you are eligible to vote")
    else:
        print("get out!")


main()