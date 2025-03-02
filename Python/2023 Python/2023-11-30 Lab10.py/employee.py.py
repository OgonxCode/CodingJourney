class IdInitializer:
    def __init__(self, name, idNum, depArea, role):
        self.__name = name
        self.__ID = idNum
        self.__department = depArea
        self.__title = role


# set and gets name of employee
    def getName(self):
        return self.__name

    def setName(self, newName):
        self.__name = newName

# set and gets ID of id num
    def getID(self):
        return self.__ID

    def setID(self, newID):
        self.__ID = newID

# set and gets department
    def getDepartment(self):
        return self.__department

    def setDepartment(self, newDepartment):
        self.__department = newDepartment

# set and gets title
    def getTitle(self):
        return self.__title

    def setTitle(self, newTitle):
        self.__title = newTitle


# prints all the information needed using __str__()
    def __str__(self):
        return (f"Name: {self.__name} \n"
                f"ID number: {self.__ID} \n"
                f"Department: {self.__department} \n"
                f"Title: {self.__title} \n")
