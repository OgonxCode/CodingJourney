package unit4;

public class Project {
	
	public static boolean balance( boolean afford) {
		int balance = 10000;
		int price = 1400;
		if (balance > price) {
			balance = balance - price;
			return true;
		} else { return false;
		}
	}
	
	public static String Confirm() {
		
		String dC = "Your payment had been denied";
		String aC= "your payment has been confirmed!";
		
		if(balance(true)) {
			return aC;
		} else { return dC;}
	}

	public static void main(String[] args) {
		
		System.out.println("weclome to VCC AirLines the ticket is $1400 from Vancouver, B.C (YVR) to Tokyo, narita (NRT) ");

        System.out.println("Thank you for purchasing your payment will proccess in 5 seconds");
	    
        try {
        	Thread.sleep(5000);
		System.out.println("your payment is proccesing now");}
        catch (InterruptedException e) {
		System.out.println("proccesing complete");
		}
        System.out.println(Confirm());
		
	
	}

}

    