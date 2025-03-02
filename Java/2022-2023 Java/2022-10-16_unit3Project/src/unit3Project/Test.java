package unit3Project;

import java.util.Arrays;

public class Test {

	public static void main(String[] args) {
		
		
		
	     int[] students = new int[3];
	     int[] winnerOfDraw = new int[3];
	     int schoolsIncome = 0;
	     
	 
	 
	     for( int i = 0; i < 20 ;i++ ){
	    	schoolsIncome = schoolsIncome + 1000;
	    	
	    	 }
	     
	     for ( int i = 0; i < students.length;i++) {
		    	students[i] = (int) (Math.random()*3);
		    	
		    	System.out.println("the students numbers are " + students[i]);
	     }
	     
	     System.out.println(" ");
	     
	     
	     for ( int i = 0; i < winnerOfDraw.length;i++) {
	    winnerOfDraw[i] = (int) (Math.random()*3);
	    System.out.println("the winning numbers are " + winnerOfDraw[i]);
	    
	     }
	    
	     System.out.println(" ");
	     
	     if (schoolsIncome > 15000) {
            if (Arrays.equals(students,winnerOfDraw)) {
            	System.out.println("students Congrats you have won 1000$! [̲̅$̲̅(̲̅ιο̲̅̅ο̲̅̅)̲̅$̲̅]");
            } else {
            	System.out.println("lets try again next month!");
            	
            }
            	
            }
	      }   	 
	    }

	


