package taskproject;

import java.time.LocalDate;
import java.util.ArrayList;

public class CenterOfOperation {

	public static void main(String[] args) {
		//creates instances of Task
	    Task task1 = new Task("music", "Create a music", LocalDate.now(),false );
	    Task task2 = new Task("program", "create a program", LocalDate.now(),false );
	    
	    //create a instance of a TaskManager
	    TaskManager taskManager = new TaskManager();
	    
	    //add tasks to the TaskManager
	    taskManager.addTask(task1);
	    taskManager.addTask(task2);
	    
	    //gets all tasks
	    ArrayList<Task> tasks = taskManager.getAllTasks();
	    
	    //Print task details
	    for (Task task: tasks) {
	    	System.out.println("Name: " + task.getName());
	    	System.out.println("Description: " + task.getDescription());
	    	System.out.println("Deadline: " + task.getDeadline());
	    	System.out.println("Status: " + task.getStatus());
	    	System.out.println("");
	    	System.out.println();
	    }
	}

}
