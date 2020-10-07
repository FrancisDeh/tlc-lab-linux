#include<iostream>

//function declarations
int getInput(int index);

int main() {
int val1, val2, val3, val4, val5;
double mean;

val1 = getInput(1);
val2 = getInput(2);
val3 = getInput(3);
val4 = getInput(4);
val5 = getInput(5);

mean = (val1 + val2 + val3 + val4 + val5) / 5.0;

std::cout << "The mean " << mean;

return 0;
}

int getInput(int index) {
	std::cout << "Enter number " << index << ": ";
	int result;
	std::cin >> result;
	return result;
}


//functions
