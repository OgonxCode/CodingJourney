package guessingGame;

import java.util.Scanner;


public class Guesser {

	public static void main(String[] args) {
	 Scanner scan = new Scanner (System.in);
		
	while(true) {	
		int g = (int)(Math.random()*10)+1;
		
		System.out.println("please guess a number between 1 and 10!");
		int guess = scan.nextInt();
		
		if (g == guess) {
			System.out.print("congrats you guessed the right number");
			
		} else { System.out.println("please try again!"); 
		}
		}
	}

}
