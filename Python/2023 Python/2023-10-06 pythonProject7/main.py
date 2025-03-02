def getValidNumber():
    while True:
        try:
            gradeInput = int(input("Enter your grade from 0-100%: "))
            if 0 <= gradeInput <= 100:
                return gradeInput
            else:
                print("Invalid input. Please try again.")
        except ValueError:
            print("Invalid input. Please enter a valid number.")


studentGrade = []
anotherMark = "yes"

while anotherMark.lower().strip() == "yes":
    studentGrade.append(getValidNumber())
    anotherMark = input("Enter yes if you need to add another grade: ")

print(studentGrade)
amountOfTests = len(studentGrade)
maxScore = amountOfTests * 100
studentScore = 0

for i in range(len(studentGrade)):
    studentScore += studentGrade[i]

averageCalc = studentScore / maxScore * 100
averageGrade = averageCalc.__floor__()


if averageGrade <= 60:
    print("your average grade was ", str(averageGrade), " you are getting a grade of F")
elif 60 < averageGrade < 70:
    print("your average grade was ", str(averageGrade), " you are getting a grade of D")
elif 70 < averageGrade < 80:
    print("your average grade was ", str(averageGrade), " you are getting a grade of C")
elif 80 < averageGrade < 90:
    print("your average grade was ", str(averageGrade), " you are getting a grade of B")
elif 90 < averageGrade < 100:
    print("your average grade was ", str(averageGrade), " you are getting a grade of A")

