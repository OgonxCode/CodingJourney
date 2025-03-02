package numberBetween;

import java.util.Scanner;
import java.util.Arrays;

public class NumberPicker {

	public static void main(String[] args) {
		
		Scanner chooseSix = new Scanner(System.in);
		
		System.out.println("Please input how many numbers you would like to choose from 1 - 6");
		
		int n = chooseSix.nextInt();
	    int[] array = new int[n];
	   
	    
	    if (n > 6) {
	    	System.out.print("ERROR this number is bigger than 6 please try again");
	    } else {
	    
	    System.out.println("Enter " + n + " numbers between 1 and 49");
	    
	    for(int i = 0; i < n; i++) {
        array[i] = chooseSix.nextInt();
	   }
	    }
	   
	    System.out.println("your numbers are: ");
	    for (int i=0; i < n; i++) {
		   Arrays.sort(array);
		   System.out.println(array[i]);
	   }	   
	    
	    

	    	
}
	    
	 }


