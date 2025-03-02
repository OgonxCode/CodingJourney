package indexOfChar;

import java.util.Scanner;

public class IndexFinder {

	public static void main(String[] args) {
		
		Scanner wordle = new Scanner(System.in);
		
		
	   

		System.out.println("please write a word of your choice");
		String userWord = wordle.nextLine();
		System.out.println("please choose the letter you would like to pick from your word using a number");
		int userNum = wordle.nextInt();
		
		int firstIndex = userWord.indexOf(userNum);
		
		System.out.println(userWord);
	}

}
