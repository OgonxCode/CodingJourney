package taskproject;

import java.util.ArrayList;

public class TaskManager {
	
		
	private ArrayList<Task> tasks;
	
	
	public TaskManager() {
		tasks = new ArrayList<>();
	}
	
	//creates a new array in the array list when called
	public void addTask(Task task) {
		tasks.add(task);
	}
	
	//replaces the current index with the index at the new task 
	public void updateTask(int index, Task updatedTask) {
		tasks.set(index, updatedTask);
	}
	
	//this gets the task of the index and then uses the 78th line to set the status of that desired task to true!
	public void markTaskAsCompleted(int index) {
		Task task = tasks.get(index);
		task.setStatus(true);	
	}
	//this gets index of task and uses remove to clear that index
	public void deleteTask(int index) {
		tasks.remove(index);	
	}
	//this gets all array lists tasks and get total will return the total amount of tasks in number
	public ArrayList<Task> getAllTasks(){
		return tasks;
	}
	public int getTotalTasks() {
		return tasks.size();
		
	}
}
