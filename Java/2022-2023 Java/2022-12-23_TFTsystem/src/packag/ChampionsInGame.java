

package packag;
import java.util.ArrayList;

public class ChampionsInGame {
	
	
	ArrayList<String> champs = new ArrayList<String>();
	
	public void champions() {
	
		// This is the champions 
		champs.add("Shen");
		champs.add("Riven");
		champs.add("Ashe");
		champs.add("Tryndamere");
		champs.add("Aatrox");
		champs.add("Kai'sa");
		champs.add("Rammus");
		champs.add("Talon");
		champs.add("Sion");
		champs.add("Mordekaiser");
		champs.add("Skarner");
		
	}
	
	//this will set the arraylist
	public void Setter(ArrayList champs) {
		this.champs = champs;
	}
	
	
	//this will be called to get list number 
	public ArrayList getList() {
		return champs;
	}
	

}
