package scanPrac;

import java.util.Scanner;

public class PracticeScanning {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
	    System.out.println("What is you favourite car?");
	    String favCar = input.nextLine();
	    
	    System.out.println("your favourite car is " + favCar);
	    
	    System.out.print("What Year of " + favCar + " do  you perfer?");
        int yearModel = input.nextInt();
        System.out.print("nice i love " + yearModel + " cars as well!" );
        
        System.out.print("how fast do you think it goes in Miles per hour (down to the decimal)");
        double speedOfCar = input.nextDouble();
        System.out.println("wow that is a fast car at the speed of " + speedOfCar + "MPH");
        
	   
	  
	

	}

}
