
package backWord;
import java.util.Scanner;
public class StringReverse {
static String accept;
static Boolean again;
	public static void main(String[] args) {
       	
		
		
		Scanner scan = new Scanner(System.in);	
		String word;
		String reversed;
		int start = 0;
		
		if(reRun() == true || start == 0 ) {
			start++;
			for(int j = 0; j < 9999; j++) {
		
		
		 word ="";
		 reversed ="";
		System.out.println("welcome to the ReverseWord application please type one word you would like to reverse");
		word = scan.next();
		System.out.println("Thank you we will now Reverse the word " + word);
		
		for(int i = word.length()-1; i >= 0; i-- ) {
			reversed = reversed + word.charAt(i);
		}
        System.out.println("your reversed word is " + reversed);
        System.out.println("would you like to reverse another word?");
        accept = scan.nextLine();
			}
		}
		
        
		
		System.out.println("thank you for using ReverseWord hope you visit us again");
	}
	
	public static Boolean reRun() {
		if(accept == "yes") {
			return true;
		} else {
			return false;
		}
	}

}

