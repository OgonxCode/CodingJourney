package blackJackVid;
/* an implementation of a card type
 * 
 */
public class Card {
     
	/* the Suit holds the 4 types of cards 
	 * 
	 */
	private Suit mySuit; 
	
	/* 
	 * the number of this card, where ace is 1, Jack-King 11- 13
	 */
	private int myNumber;
	
	
	/* 
	 * Card  constructor 
	 * 
	 * @param aSuit the suit of the card 
	 * @param aNumber the number of the card
	 */
	
	public Card(Suit aSuit, int aNumber) {
			
		this.mySuit = aSuit;
		this.myNumber = aNumber;
		
		
	}
}
