#include <iostream>
using namespace std; 

void removeDupWord(string str) 
{ 
string word = ""; 
for (auto x : str) 
{ 
    if (x == '-') 
    { 
      	int count = 0;
       for(auto ch : word) {
          count++;
       }	
       cout << word << " "<< count << endl;
        word = ""; 
    } 
    else
    { 
        word = word + x; 
    } 
} 
cout << word << endl;
//    int count = 0;

//    while (str[count]!= '\0')
//    count++;
//    cout <<"The length of the string is "<<count<<endl;
}
// Driver function 
int main() 
{ 
    string str = "hello-this-is-a-line-of-input"; 
    removeDupWord(str); 
    return 0; 
} 
