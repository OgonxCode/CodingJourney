package squareCal;

import java.util.Scanner;

public class CornersCal {

	public static void main(String[] args) {
		
		Scanner lowLeft = new Scanner(System.in);
	    Scanner topRight = new Scanner(System.in);
	    Scanner usersCords = new Scanner(System.in);
	    
		System.out.println("please enter X coordinates of bottom left of a square");
		int XBotValue = lowLeft.nextInt();
		System.out.print("please enter Y coordinates of bottom left of a square");
		int YBotValue = lowLeft.nextInt();
		
		System.out.println(" ");
		
		System.out.println("your X and Y coordinates for the bottom left are " + XBotValue + " and " + YBotValue);
		
		System.out.println(" ");
		
		System.out.println("please eneter X coordinates of top right of a square");
        int XTopValue = topRight.nextInt();
        System.out.println("please eneter Y coordinates of top right of a square");
        int YTopValue = topRight.nextInt();
        
        System.out.println(" ");
        
        System.out.println("your X and Y coordinates for the bottom left are " + XTopValue + " and " + YTopValue);
        
        System.out.println(" ");
        
        System.out.println("please enter a X coordinate ");
        int userCordX = usersCords.nextInt();
        System.out.println("please enter a Y coordinate ");
        int userCordY = usersCords.nextInt();
        
        System.out.println(" ");
        
        System.out.println("your coordinates are " + userCordX + " and " + userCordY);
        
        
        if(userCordX > XBotValue && userCordY > YBotValue || userCordX < XTopValue && userCordY < YTopValue) {
        	System.out.println("Your values are in the square");
        } else {
        	System.out.println("Your values are not in the square");
        }
	}

}
