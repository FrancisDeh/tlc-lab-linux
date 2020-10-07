#include<iostream>
int multByTwo(int * age);
int mult(int &age);

int main() {
 int age = 14;
 std::cout << age << std::endl;
 std::cout << multByTwo(&age) << std::endl;
 std::cout << age << std::endl;
 //std::cout << mult(age) << std::endl;
 //std::cout << age << std::endl;
}

int multByTwo(int* age) {
 *age = *age * 2;
  return *age;
}

int mult(int &age) {
 age = age * 2;
 return age;
}
