package notde;

public class Testu {

	public static void main(String[] args) {
		int count = 1;
		
		int[]numbers = {1,2,3,4,5};
		
		for(int i = 0; i < numbers.length; i++) {
			if(numbers[count] == 4) {
			System.out.println("Number " + count + " in the array is equal to 4");
			count = count + 1;
			}
		}

	}

}
