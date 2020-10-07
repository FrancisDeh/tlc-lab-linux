public class RangeRandom {
	public static void main(String args[]) {
		int randomNumber = 0;

		do {
			//generate random number between -3 and 3
			randomNumber = (int)((Math.random() * ((6) + 1)) -3);
			System.out.println("Random number " + randomNumber);

		} while (randomNumber != 0);
	
	}


}
