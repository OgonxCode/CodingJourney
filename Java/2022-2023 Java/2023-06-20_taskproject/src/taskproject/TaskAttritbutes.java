package taskproject;

import java.time.LocalDate;
import java.util.ArrayList;



	
	
	// task informations and data
	class Task { 
		private String name;
		private String description;
		private LocalDate deadline;
		private boolean status;
		
		
		public Task(String name, String description, LocalDate deadline, boolean status) {
			this.name = name; 
			this.description = description;
			this.deadline = deadline;
			this.status = status;
		
		}
		
		//Getters
		public String getName() {
			return name;
		}
		public String getDescription() {
			return description;
		}
		public LocalDate getDeadline() {
			return deadline;
		}
		public boolean getStatus(){	
		return status;	     
		}
		
		//Setters
		public void setName(String name) {
			this.name = name;
		}
		public void setdescription(String description) {
			this.description = description;
		}
		public void setLocalDate(LocalDate deadline) {
			this.deadline = deadline;
		}
		public void setStatus( boolean status) {
			this.status = status;
		}	
	}	

	
	


/*Start by designing the Task class: Create a class that represents a task with attributes such as task name, description, deadline, and status.

Implement a TaskManager class: This class will be responsible for managing the tasks. It should have methods for adding a new task, updating task details, marking a task as completed, and deleting a task.

Use ArrayList or LinkedList to store the tasks: Choose a suitable data structure to store the tasks in memory. This will allow you to add, modify, and remove tasks dynamically.

Implement user input and menu options: Create a user interface that allows users to interact with the application. You can use the Scanner class to read user input and display a menu with options like adding a task, updating a task, viewing all tasks, and marking tasks as completed.

Save and load tasks from a file: Implement methods to save the tasks to a file and load them back when the application starts. This will allow users to persist their tasks even after closing the program.

Add error handling: Implement error handling for invalid user input, file read/write errors, and any other potential issues.

Test your application: Create a few sample tasks and test your application thoroughly to ensure it functions as expected.

Expand and enhance the application: Once you have the basic functionality working, you can add more features like sorting tasks by deadline, searching for tasks, or adding priority levels. */