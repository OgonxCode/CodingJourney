package arrays20;

public class Filler {
	
	 public static void main(String[] args) {
		 
		
		 }
	 
	   public static int big (int []arr) {
		   
	     int count = 0; 
	     for(int i = 0; i<arr.length;i++) {
	    	 if(arr[i] >= 0) {
	    		 count++;
	    	 }
	     }
			return count;
	}
}
				