package scannertutorial;
import java.util.Scanner;
public class scannertut {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		System.out.println("whats your first name?");
		String name = scan.next();
		
		System.out.println("nice to meet you " + name);
		
		System.out.println("What's your age?");
		int age = scan.nextInt();
		
		System.out.print("Whats your senior quote?");
        String quote = scan.next();
        quote += scan.nextLine();
        
        System.out.print("Thank you " + name + ", you are " + age + " years old! your senior quote is " + quote);
	}

}
