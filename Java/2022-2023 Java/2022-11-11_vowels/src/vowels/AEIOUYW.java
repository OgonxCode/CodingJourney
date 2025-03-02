package vowels;

public class AEIOUYW {
	
	  public static void main(String[] args) {
	    
		  String word = "aeiouwy";
		  
		  System.out.println("the number of vowels in "+ word +" is " + vowels(word));
	    }
	  
	  public static int vowels (String word) {
		  
		  int numV = 0;
		  for (int i = 0; i < word.length(); i++)
		  if (word.charAt(i) == 'a' || word.charAt(i) == 'e' || word.charAt(i) == 'i' || word.charAt(i) == 'o' || word.charAt(i) == 'u') {
			  numV++;
		  }
	return numV;	  
	  }
	
	}
	
	

