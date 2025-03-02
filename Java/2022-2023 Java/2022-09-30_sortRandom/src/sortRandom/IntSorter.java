package sortRandom;

import java.util.Arrays;
public class IntSorter {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    int array[] = new int[20];
    
    for (int i = 0; i < 20; i++) {
    	array[i] = (int)(Math.random()*20)+1;
    }
    for (int j = 0; j < 20; j++) {
    	Arrays.sort(array);
    	System.out.println(array[j]);
    	
    	
    	
    }
	}

}
