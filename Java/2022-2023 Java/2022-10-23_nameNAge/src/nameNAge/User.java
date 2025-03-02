package nameNAge;

import java.util.Scanner;

public class User {

	public static void main(String[] args) {
	
		
		Scanner scan = new Scanner(System.in);
		String name;
		int age;

		System.out.println("please enter your name: ");
		name = scan.nextLine();
		System.out.println("please enter your age: ");
		age = scan.nextInt();

		System.out.print("Your name is " + name + " and your age is " + age);
		
		
		int num = 0;
		
		for(int i = 0; i < 10; i++) {
		num++;
			System.out.print(num);
		}
	}

}

