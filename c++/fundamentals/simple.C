#include<iostream>
using namespace std;

int main() {
	int i {5};

	cout << i << endl;
	cout << &i << endl;
	int *p {&i};

	cout << p << endl;
	cout << *p << endl;
	*p = 10;

	cout << i <<endl;
       cout << *p << endl;

	


}
