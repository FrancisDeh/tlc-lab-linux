#include<iostream>
using namespace std;

int main(){
	char rev[] = "reverse";
	int i = 0;

	while (rev[1] != '\0'){
		++i;
		cout << "No of chars: " << i;
		
		while (i > 0){
			--i;
			cout << rev[i];
		}
	}

}
