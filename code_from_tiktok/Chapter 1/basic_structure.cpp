/**
 * syntax to include any C++ library.
 *
 * #include<library>
 *
 * here the library is iostream; which includes our cout, cin and other
 * utilities.
 * */
#include <iostream>

/**
 * this part helps us to not write std:: repeatedly.
 * */
using namespace std;

/**
 * This program serves as main entry point to the program, the execution
 * begin from the main(). Every code you write inside it, become compiled by
 * compiler and then when you run it, it becomes executed.
 * */
int main() {
  // write your code here
  // example hello world and many more
  cout << "Welcome to C++\n";
  int a = 5;
  cout << "a = " << a << " or Value of a " << a << endl;
  int b;
  cout << "Enter number: ";
  cin >> b;
  cout << "The number you entered is: " << b << endl;
  return 0;
}
