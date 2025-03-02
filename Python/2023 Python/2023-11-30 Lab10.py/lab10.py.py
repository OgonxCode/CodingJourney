# author: ariya kawamura
# date 2023-11-29
# purpose is to use a separate class to hold the information for the employees so that we can call it in the main file

import employee

def main():
    empInfo = employee.IdInitializer("John Doe", 100, "Garbage Picking", "Chief GP")
    empInfo2 = employee.IdInitializer("Joe Shmoe", 101, "Garbage Picking", "GP Supervisor")
    empInfo3 = employee.IdInitializer("Karen Salten", 420, "Human resource", "Chief Complaining manager")

    print(empInfo)
    print(empInfo2)
    print(empInfo3)


main()