'''program a to do list in python using inputs and arrays using array with a due date and a task name
using a input system to be able to add a task with a due date also be able to to mark task as complete
 remove them from the date'''
all_arrays = []
anotherTask = "yes"
startAgain = True

while startAgain:
    addTask = input("enter yes or no if you want to add a task: ")
    if addTask.lower() == 'no':
        break
    else:
        print("add a new task first start with the name of the task")
# this is the input for the tasks name
        Task_Name = input("Enter your task name: ")

# this is the input for the time to complete said task
        Task_Time = input("Enter your task in minutes: ")

# this automatically sets the task to false because the task just got added in
        Task_Status = False


        task_Array = [Task_Name,Task_Time,Task_Status]
        all_arrays.append(task_Array)


taskToMark = int(input("enter a number for the task you want to mark as complete(the tasks are in order starting from 1)"))

if taskToMark > 0:
    task_Array [taskToMark][2] == True
    print(task_Array)
else:
    print("you broke the system")