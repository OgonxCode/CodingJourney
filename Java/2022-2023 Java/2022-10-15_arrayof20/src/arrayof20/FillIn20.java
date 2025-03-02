package arrayof20;


public class FillIn20 {

	public static void main(String[] args) {
		
		int[] twenty = new int[20];
		
		for (int i=0; i<twenty.length; i++) {
			
			twenty[i] = (int) (Math.random()*20);
			System.out.println(twenty[i]);
		}
		
	}
}
