package bzzz;

public class DeBuggin {

	public static void main(String[] args) {
    
		System.out.println("Hello");
		System.out.println("Alexandra Abramov");
			
	    int sum = 74 + 36;
	    System.out.println(sum);
	    
	    int div = 50/3;
	    System.out.println(div);
	    
	    
	   int[] arr;
	   arr = new int [4];
	   arr[0] = -5 + 8 * 6;
	   arr[1] = (55+9) % 9;
	   arr[2] = 20 + -3*5/8;
	   arr[3] = 5+15/3*2-8%3;
	   
	   for(int i = 0; i < arr.length; i++) {
		   System.out.println(arr[i]);
		   
	   }
		   int exampleVariable = 20;

		   exampleVariable = exampleVariable + 2;

		   exampleVariable = exampleVariable * 3;

		   int b = 20;

		   b = exampleVariable - (2*b);

		   exampleVariable = 100 + b;
		   
		   System.out.println(exampleVariable);
		   
	
	   
	   
	}

}
