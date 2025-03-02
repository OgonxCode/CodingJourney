'''program a to do list in python using inputs and arrays using array with a due date and a task name
using a input system to be able to add a task with a due date also be able to to mark task as complete
 remove them from the date'''
anotherTask = ""
for anotherTask == "yes"
print("add a new task first start with the name of the task")
### this is a input to input a users information
### this is the input for the tasks name
Task_Name = input("Enter your task name: ")

### this is the input for the time to complete said task
Task_Time = input("Enter your task in minutes")

### this automatically sets the task to false because the task just got added in
Task_Status = False

anotherTask = input("Do you have another task to add?")

taskArray = [Task_Name,Task_Time,Task_Status]

print(taskArray)