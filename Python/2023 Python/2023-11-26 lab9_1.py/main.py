# author: ariya kawamura
# date: 2023-11-22
# The purpose of this program is to check if there are time conflicts between the courses that you pick

# asks user to input your student id
def inputStudentID():
    go = True
    while go:
        try:
            studentNumber = input("please enter your studentNumber: ")
            if studentNumber.isalpha():
                raise ValueError
            else:
                return studentNumber
        except ValueError:
            print("Error you did not enter a integer")
        except:
            print("Error unexpected problem occurred")

# asks user to input student name
def inputName():
    go = True
    while go:
        try:
            studentName = input("please enter your studentName: ")
            if studentName.isalpha():
                return studentName
            elif studentName.isdigit():
                raise ValueError
        except ValueError:
            print("Error you did not enter a letters")
        except:
            print("Error unexpected problem occurred")

# asks user to input course id
def inputCourseID():
    courses = []
    availableCourses = ["cs101","art101","cs102"]

    for _ in range(3):
        while True:
            try:
                courseInput = input("Please enter which course you would like to take " + ", ".join(availableCourses) + " or type none to exit: ")
                if courseInput.strip().lower() == 'none':
                    return courses

                if courseInput.strip().lower() not in availableCourses:
                    raise ValueError("Invalid course selection")

                courses.append(courseInput)
                availableCourses.remove(courseInput.strip().lower())
                break
            except ValueError as ve:
                print("a value error has occured please try again")
            except Exception as e:
                print("a unexpected error has occured please try again")
    return courses


def convertTime24(timeStr):
    # Convert time in 24:00
    hours, minutes = map(int, timeStr.split(':'))
    return hours + minutes / 60

def validateTimeTable(selectedCourses, courseDic):
    conflicts = []

    for i in range(len(selectedCourses)):
        for j in range(i + 1, len(selectedCourses)):
            courseId1 = selectedCourses[i]
            courseId2 = selectedCourses[j]

            if courseId1 in courseDic and courseId2 in courseDic:
                # collect course info in separate variables
                courseInfo1 = courseDic[courseId1]
                courseInfo2 = courseDic[courseId2]

                # converts first course timeline into 24 hours
                startTime1 = convertTime24(courseInfo1[1])
                endTime1 = startTime1 + courseInfo1[2]

                # converts the second course timeline into 24 hours
                startTime2 = convertTime24(courseInfo2[1])
                endTime2 = startTime2 + courseInfo2[2]

                # check if there is a time conflict
                if startTime1 < endTime2 and endTime1 > startTime2:
                    conflicts.append("Conflict between " + courseId1 + " and " + courseId2)

    if conflicts:
        print("Timetable has conflicts:")
        for conflict in conflicts:
            print(conflict)
    else:
        print("Timetable is conflict-free.")

def main():
    # dictionary holds course id which can access course name, course time and duration of course
    courseDic = {
        "cs101": ["Intro Programming", "13:00", 2],
        "art101": ["Intro Art", "12:30", 2],
        "cs102": ["Computer Hardware", "16:00", 2]
    }
    # asks user to input name
    name = inputName()
    # asks user to input student id
    studentID = inputStudentID()
    # asks user to input course id
    selectedCourses = inputCourseID()

    # if there are no courses close program
    if len(selectedCourses) == 0:
        print("you did not choose any courses")
        return

    # prints out each course that is chosen
    print("Your selected courses are:", ", ".join(selectedCourses))

    # validates the times and calculates if there are interruptions
    validateTimeTable(selectedCourses, courseDic)
    return


main()