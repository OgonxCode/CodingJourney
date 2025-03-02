package notDe;

public class Arraylooker {
    
	
	static int arrayAverage(int x[], int y) {
		
		int add = 0;
		
		for (int i = 0; i < y; i++) 
			
			add += x[i];
		
		return (int) add / y;
	}
	  
	
	public static void main(String[] args) {
	
		int array[] = {1, 2, 3, 4, 5,};  
        int y = array.length;
        
        System.out.println(arrayAverage(array,y));
	}

}
