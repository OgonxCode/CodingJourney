package packag;
import java.util.Scanner;

public class rerollSystem {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
	      
		
		System.out.println("please type start to start Reroll Game");
		String replay = scan.next();
		
		Boolean startGame;
		
		
				
			if(replay == "start") {
				startGame = true;
			} else {startGame = false;}
		
		while(startGame = true) {
			
			if(replay == "start") {
				startGame = true;
			} else {startGame = false;}
		
		int ChosenChamp = (int) ((Math.random()*5)+1);
		int Enemy = (int) ((Math.random()*5)+1);
		
		String[]  PlayerPick = new String[2];
		String[]  EnemyPick = new String[2];
		
		String[][] champions = 
			{{"Shen","3"},
			{"Ashe","1"},
			{"Mordekaiser","5"},
			{"Talon","2"},
			{"Rammus","4"}};
		

		      if (ChosenChamp == 1) {
			PlayerPick[0] = champions[0][0];
			PlayerPick[1] = champions[0][1];
		}else if (ChosenChamp == 2) {
			PlayerPick[0] = champions[1][0];
			PlayerPick[1] = champions[1][1];
			
		}else if ( ChosenChamp == 3) {
			PlayerPick[0] = champions[2][0];
			PlayerPick[1] = champions[2][1];
		}else if ( ChosenChamp == 4) {
			PlayerPick[0] = champions[3][0];
			PlayerPick[1] = champions[3][1];
		}else if ( ChosenChamp == 5) {
		    PlayerPick[0] = champions[4][0];
		    PlayerPick[1] = champions[4][1];}  
		      
		 
		      if (Enemy == 1) {
					EnemyPick[0] = champions[0][0];
					EnemyPick[1] = champions[0][1];
				}else if (Enemy == 2) {
					EnemyPick[0] = champions[1][0];
					EnemyPick[1] = champions[1][1];
				}else if (Enemy == 3) {
					EnemyPick[0] = champions[2][0];
					EnemyPick[1] = champions[2][1];
				}else if (Enemy == 4) {
					EnemyPick[0] = champions[3][0];
					EnemyPick[1] = champions[3][1];
				}else if (Enemy == 5) {
					EnemyPick[0] = champions[4][0];
		            EnemyPick[1] = champions[4][1];}
		      
		      
		      System.out.println("Your champion is " + PlayerPick[0] + " the tier of your champion is " + PlayerPick[1] );
		      System.out.println("The enemy's Champion is " + EnemyPick[0] + " the tier of the champion is " + EnemyPick[1]);
		      
		      int pTier = Integer.parseInt(PlayerPick[1]);
		      int eTier = Integer.parseInt(EnemyPick[1]);
		      
		      
		  if(eTier > pTier) {
			  System.out.println("The enemy with his champion " + EnemyPick[0] + " has beaten your champion");
		  } else if (pTier > eTier) { System.out.println("your champion " + PlayerPick[0] + " has beaten the enemy");
		  } else { System.out.println("There has been a tie please try again");}
		  
		  
		  System.out.println("if you would like to try again please type start");
		replay = scan.next();
		  
		}
		
		
   }
		  
}
