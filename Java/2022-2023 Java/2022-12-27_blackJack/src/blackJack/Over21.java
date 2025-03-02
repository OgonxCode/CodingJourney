package blackJack;

import java.util.Scanner;

public class Over21 {
	
	static Scanner scan = new Scanner (System.in);
	static int balance = 1000;
	static int possibleBalance;
	static int chips = 0;
	static int chipPrice = 100;
	static int costOfChips;
	
	
	
	
	
	public static void exchangeSystem() {
		
	
	System.out.println("How many chips would you like to exchange? each chips is 100$, you have $" + balance);
		
		int chipsDesired = scan.nextInt();
		
       costOfChips = chipPrice * chipsDesired;
	
		possibleBalance = balance - costOfChips;
		
		if(possibleBalance < 0) {
			System.out.println("Sorry you do not have enough money");
			possibleBalance = 0;
		}else { 
		
		balance = possibleBalance;
		chips = chips + (costOfChips / 100);
		
		possibleBalance = 0;
		}
		System.out.println("you have " + chips + " chips");  
		}
	
	public static void randoCard() { 
		
	}

	
	
	public static void main(String[] args) {
	System.out.println("welcome to blackjack please exchange for chips");
		exchangeSystem();
		
		System.out.println("we will now start the game");
		
		System.out.println("Please place your bets, how many chips would you like to stake?");
		int chipStaked = scan.nextInt();
		
}
}