# C++ Tests

## Chapter 1 

Solve each of the following problems before moving on to chapter 2.

1. Write a C++ program to print "I learnt it from helloworld_275".
2. Write a C++ program that prints "Hello YOUR_NAME" and your name in the following format. For example, if your name is Aleena, then the program should print "Hello, Aleena".
3. Write a C++ program that print "I completed my first chapter in C++".

## Chapter 2

Solve each of the following problems before moving on to chapter 3.

1. Write a C++ program that prints the sum of two numbers.
> - First you will declare two variables, of numeric datatype (int/float etc).
> - after that you read those variables via user input using the `cin >>` syntax.
> - and then you declare another variable to store the result `int result = VAR_NAME_1 + VAR_NAME_2;`, and then print the result using `cout << `.

2. Write a C++ program that ask your name and then print "Assalam-o-Alaikum YOUR_NAME".
> - First you will declare a variable of type string to store your name.
> - use `getline(cin, VAR_NAME)` to read the string variable, VAR_NAME should be the name of variable.
> - finally use `cout <<` to print the desired output.

3. Write a program to read five numbers and print the numbers in reverse order.
> - first declare 5 variables of numeric datatype.
> - use `cin >> VAR_NAME_1 >> VAR_NAME_2 >> ...` to read the numbers from the user.
> - and then print in reverse order using `cout << VAR_NAME_5 << VAR_NAME_4 << ...`

## Chapter 3 

Solve the following problem. 

- Write a C++ program that print the sum of two integers and sum of two float. You are only allowed to use the `auto` keyword for datatype, and there is no user input included. 
> - declare 6 variables, using the auto keyword.
> - `auto VAR_NAME_1 = 3; auto VAR_NAME_2 = 4; auto sum_i = VAR_NAME_1+VAR_NAME_2;`
> - `auto VAR_NAME_3 = 3.143; auto VAR_NAME_4 = 4.67; auto sum_f = VAR_NAME_3+VAR_NAME_4;`
> - finally print both `sum_i` and `sum_f` using `cout`.

## Chapter 4 

Solve each of the following problem before moving on to chapter 5. From now on, you are proficient enough in the syntax so no hints will be included.

1. Write a C++ program that read two float from user and the print its sum, difference, product and quotient.
2. Write a C++ program that read two integers from the user and the print the output of all the relational operators using them as operands.
> - operands are the variables that are used by the operator. **OR** the variables processed by operators are called operands.

3. Write a C++ program, in which you declare 8 variables of datatype `bool` and assign them in the following fashion:
```cpp 
bool one = false;
bool two = false; 
bool three = true;
bool four = false;
bool five = false;
bool six = true;
bool seven = true;
bool eight = true;
```
after that you print truth tables for the logical operators `&&` and `||` using the syntax: 
```cpp
cout << "----------------------------------------------------------------------------------\n";
cout << one << " LOGICAL_OPERATOR " << two << " => " << one LOGICAL_OPERATOR two << endl;
cout << three << " LOGICAL_OPERATOR " << four << " => " << one LOGICAL_OPERATOR two << endl;
cout << five << " LOGICAL_OPERATOR " << six << " => " << one LOGICAL_OPERATOR two << endl;
cout << seven << " LOGICAL_OPERATOR " << eight << " => " << one LOGICAL_OPERATOR two << endl;
cout << "----------------------------------------------------------------------------------\n";

```
> [!NOTE]
> Please note that **LOGICAL_OPERATOR** is `&&`  and `||`.

4. Without compiling this code, guess and write the output of the code on a paper. 
```cpp
#include<iostream>
using namespace std;

int main() {
  int a = 5;
  int b = 6;
  cout << a++ << ++b << (++a)+(b++) << (a++)+(++b) << ++a << b++ << endl; 
  return 0;
}
```

## Chapter 5 

More problems will be added soon.
