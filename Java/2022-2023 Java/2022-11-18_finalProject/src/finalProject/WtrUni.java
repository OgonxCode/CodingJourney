package finalProject;

import java.util.Scanner;


public class WtrUni {
	
		
     static String studentName;
	 static int studentAge;
     static int studentNumber; 
     static int correct = 0;
     static String proLoop;
 	 static Scanner scan = new Scanner(System.in);
 	 
 	 static int secondsPassed = 0;
 	 
 	 
 	 
 
    
    
	public static int sNumGen () {
		int studentNumber = (int) (Math.random() * 100);
		return studentNumber;
	}
	
	 public static boolean reRun() {
	    	if (proLoop == "yes") {
	    		return true;
	    	} else { return false;}
	    }
	 
	public static void main(String[] args) {
		
		int start = 0;
		
		if (reRun() == true || start == 0 ) {
			start++;
			
		for(int i = 0; i < 9999; i++ ) {
			correct = 0;
			studentName = "";
			studentAge = 0;
			studentNumber = 0;
			
		System.out.println("Welcome new student please enter your first name");
		
		studentName = scan.next();
		
        System.out.println("Please enter your age");
		
		studentAge = scan.nextInt();
		
		System.out.println(studentName + ", thank you for applying! we will now generate your student number.");
		
	    studentNumber = sNumGen();
	    
		System.out.println("Your number is " + studentNumber + '\n');
		
	    System.out.println("We will now do a Quiz to score your academic ablilites");
	    
	    quiz();
	    
	    System.out.println("you got " + correct + " answers correct \n");
	    
	    if (correct >= 3) {
	    System.out.print("congratulations student "+ studentNumber + ", " + studentName + " you have been accepted\n" );
	    } else { System.out.println("sorry " + studentName + " your application has been denied please try again next year\n");}
	    
	    System.out.println("if you would like to run a new application please type yes ");
	    proLoop = scan.next();
	    
		}
		}
	}
	
	    public static void answersCor() {
	    	
	    	System.out.print("you have got " + correct + " answer(s) correct so far \n" );
	    }
		
		public static void quiz() {
		
	   
	    		    
	    
			
			System.out.println("Question 1: \n" + "what is 45 + 85?");
			   
			   int q0 = scan.nextInt();
			   if( q0 == 130) {
				   System.out.println("question 1 correct \n");
				   correct++;
			   } else {
				   System.out.println("question 1 incorrect \n");}
		       
			   answersCor();
		
		
    
			
			System.out.println("Question 2: \n" + "what is the square root of 25?");
			   
			   int sqAns = scan.nextInt();
			   if(sqAns == 5) {
				   System.out.println("question 2 correct \n");
				   correct++;
			   } else {
				   System.out.println("question 2 incorrect \n");}

			   answersCor();
    
    	   int[] jeremyBasket = {1,2,3};
    	   jeremyBasket[0] = 50;
    	   jeremyBasket[1] = 30;
    	   jeremyBasket[2] = 45;
    	   
    	
    	   System.out.println("Question 3: \n" + "Jeremy has 3 baskets with apples, the first basket has 50 apples, the second has 30 apples, the third has 45 apples.");
    	   System.out.println("Justin takes 37 apples from basket 1, 17 apples from basket 2, 26 apples from basket 3. how many apples are in each basket");
    	   
    	   System.out.println("enter the answer for basket 1");
    	   int bas1 = scan.nextInt();
    	   System.out.println("enter the answer for basket 2");
    	   int bas2 = scan.nextInt();
    	   System.out.println("enter the answer for basket 3");
    	   int bas3 = scan.nextInt();
    	   
    	   if(bas1==jeremyBasket[0] - 37 && bas2==jeremyBasket[1] - 17 && bas3==jeremyBasket[2] - 26) {
    		   System.out.print("question 3 correct \n");
    		   correct++;
    	   } else { System.out.println("question 3 incorrect \n");}
    
           
    	   answersCor();
           
    	   accessCourse();
    	  int q3Answer = 40 * 10 + 2 / 2;
    		
    	
 	   System.out.println("Question 4 \n" + " what is 40 times 10 plus 2 divided by 2?");
 	   int ques3 = scan.nextInt();
 	   if(ques3 == q3Answer) {
 		   System.out.println("question 4 correct \n");
 		   correct++;
 	   }else { System.out.print("question 4 incorrect \n");}
    	
 	   
 	     answersCor();

 	    accessCourse();
	   System.out.println("Question 5, 1 of 3 \n" + " there are 6 numbers: 15,60,40,85,46,21 if you add the first , and forth together then, \n divide the answer by 2 what do you get? \n Enter your answer below");
		   int ques4p1 = scan.nextInt();
	   System.out.println("Question 5, 2 of 3 \n " + "if you do the same equation with the second number and third number what do you get?");   
	       int ques4p2 = scan.nextInt();
	   System.out.println("Question 5, 3 of 3 \n " + "if you do the same equation with the third number and the fifth number what do you get?"); 
	       int ques4p3 = scan.nextInt();
	       
	       if (ques4p1 == question4Ans(15,85)|| ques4p2 == question4Ans(60,40) || ques4p3 == question4Ans(46,40)  ) {
	    	   System.out.println("question 5 correct \n");
			   correct++;
	       } else {
	    	   System.out.print("question 5 incorrect \n"); 
	       }
	       accessCourse();   
	       
	       System.out.println("bonus Quiz, What is the first 5 numbers of Pi \n");
	       double bQ = scan.nextDouble();
	       if (bQ == 3.1415) {
	    	   System.out.println("Bonus round correct!");
	    	   correct++;
	       } else { System.out.println("Bonus round incorrect");}
	       accessCourse();  
		}
		
		
		
	       public static void accessCourse() {
	    	   if (correct == 3) { 
	    		   System.out.println("you have passed our requirements! \n");
	    	   } else if(correct == 4) {
	    		   System.out.println("you are now eligible to apply for a free paid mentoring program!\n");
	    	   } else if (correct == 5) { 
    		   System.out.println("you are now eligible to apply for a scholarship program! !\n");
	    	   } else if (correct >= 6){ System.out.println("You have won the bonus quiz you have entered the raffle for 20% off tuition!");
	    	   } else { System.out.println("you are not eligible for any of our benifits");  
	    	   
	       }  
	       }
	       
	       
	public static int question4Ans(int y, int j) {
		int x = (y + j) / 2;
		
		return x ; 
		
	}
}

