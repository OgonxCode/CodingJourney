package iAmLooping;
 
public class LoopingPrac {

	public static void main(String[] args) {

		int customerBalance = 5000;
		int carPrice = 280000;
		String happyEmote = "(っ＾▿＾)۶🍸🌟🍺٩(˘◡˘ )";
		String angryEmote = "ヽ(ಠ_ಠ)ノ";
		
		if (customerBalance > carPrice) {
		    int moneyWithdrawn = customerBalance - carPrice;
			System.out.println(" your car will be delivered to you in 7 days! your balance is " + moneyWithdrawn + "$ " + happyEmote);
		} else {
			for (int texts = 0; texts < 10; texts++ ) {
			   System.out.println("you have been denied purchase " + angryEmote);
			}
	
	    
	    }
	
	}

}
