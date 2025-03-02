# lab9_1.py
# author: [Your Name]
# purpose: simulate a course timetable app to check for course conflicts
# date: [Current Date]

def validateTimetable(studentTimetable, courseDic):
    # list to store conflict messages
    conflicts = []

    # iterate through each course in the student's timetable
    for courseId in studentTimetable:
        # check if the course ID is in the course dictionary
        if courseId in courseDic:
            currentCourseInfo = courseDic[courseId]
            currentStartTime = currentCourseInfo['timeForLecture']
            currentDuration = currentCourseInfo['duration']
            currentEndTime = currentStartTime + currentDuration

            # compare with other courses to check for conflicts
            for otherCourseId, otherCourseInfo in courseDic.items():
                if otherCourseId != courseId:
                    otherStartTime = otherCourseInfo['timeForLecture']
                    otherDuration = otherCourseInfo['duration']
                    otherEndTime = otherStartTime + otherDuration

                    # check if there is a time conflict
                    if (
                        currentStartTime < otherEndTime
                        and currentEndTime > otherStartTime
                    ):
                        conflicts.append(
                            "Conflict between " + courseId + " and " + otherCourseId
                        )

    # print the result
    if conflicts:
        print("Timetable has conflicts:")
        for conflict in conflicts:
            print(conflict)
    else:
        print("Timetable is conflict-free.")


def main():
    # dictionary of courses
    courseDic = {
        'CS101': {'name': 'Intro Programming', 'timeForLecture': 13, 'duration': 2},
        'Art101': {'name': 'Intro Art', 'timeForLecture': 12.5, 'duration': 2},
        'CS102': {'name': 'Computer Hardware', 'timeForLecture': 16, 'duration': 2},
    }

    # user input for timetable
    studentName = input("Please enter your name: ")
    studentId = input("Please enter your student ID: ")

    studentTimetable = []
    while True:
        courseId = input(
            "Please enter the course ID you are taking (or type 'done' to finish): "
        )
        if courseId.lower() == 'done':
            break
        else:
            studentTimetable.append(courseId)

    # validate the timetable
    validateTimetable(studentTimetable, courseDic)


if __name__ == "__main__":
    main()
