Test1 = int(input("Enter your first test score: "))
Test2 = int(input("Enter your second test score: "))
Test3 = int(input("Enter your second test score: "))

overAllScore = Test1 + Test2 + Test3
passedTest = 285
averageScore = overAllScore/3

if overAllScore >= passedTest:
    print("you passed the class!")
else:
    print("you failed the class!")


print("your average score was " + str(averageScore))

