public class CustomRandom {
	public static void main(String args[]) {
	//generate random number between 0 and 100
	int randomNumber = (int) (Math.random() * 100) + 1;
	System.out.println("Random number is " + randomNumber);

	if(randomNumber % 2 == 0) {
		System.out.println("Even");
	} else {
		System.out.println("Odd");
	}
	
	categorize(randomNumber);

	}

	public static void categorize(int number) {
		if(number == 0) { System.out.println("Frozen");}
		else if(number >= 1 && number <= 14){ System.out.println("Cold");}
		else if (number >= 15 && number <= 24) { System.out.println("Cool");}
		else if (number >= 25 && number <= 40) { System.out.println("Warm");}
		else if (number >= 41 && number <= 60) { System.out.println("Hot");}
		else if (number >= 61 && number <= 80) { System.out.println("Very hot");}
		else if (number >= 81 && number <= 99) { System.out.println("Extremely hot");}
		else if (number == 100) { System.out.println("Boiling");}
	
	}
}
