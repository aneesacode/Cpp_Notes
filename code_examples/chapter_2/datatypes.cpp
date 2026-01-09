#include <iostream>

using namespace std;

int main() {
  /**
   * Variables in  C++
   *
   *  Variables are named location for your data inside memory; thats it.
   *
   *  Example like you store spices(masala) in a jar inside cabinets in the
   * kitchen.
   *
   *  the `masala` is the data and the jar is the variable the cabient is the
   * memory specified by compiler for the program and kitchen is your RAM.
   * */

  /**
   * Datatypes in C++.
   *
   * Datatypes are reserved keywords that convey the intent that the named
   * location store certain type of data. C++ provides us the following
   * categories of data types.
   *
   * 1. Integral Datatypes
   * - (i): short -- 2 bytes
   * - (ii): int -- 4 bytes
   * - (iii): long -- 8 bytes
   * - (iv) long long -- upto 16 bytes
   *
   *   The more the size the more the length of number.
   *
   * 2. Floating Datatypes
   * - (i): float -- 4 bytes
   * - (ii): double -- 8 bytes
   * - (iii): long double -- more than 8 bytes
   *
   *    The more the size the more the precision.
   *
   * 3. Literal/Character Datatypes
   * - (i): char -- 1 byte
   * - (ii) string -- collection of char -- n bytes; n is number of characters
   *        inside the string.
   *
   * 4. Boolean Datatypes
   * - (i): bool -- 1 byte; represent a state; 0 or 1; true or false;
   * */

  // lets define and use variables.
  // integral types.
  short i16 = 123;                     // some value;
  int i32 = 234234234;                 // some longer value;
  long i64 = 23479283472834;           // some more longer value;
  long long i128 = 398472348978232324; // some even more longer value;

  cout << "short: " << i16 << endl;
  cout << "int: " << i32 << endl;
  cout << "long: " << i64 << endl;
  cout << "long long: " << i128 << endl;

  // floating types.
  float f32 = 234.2347623489728349;                // some value;
  double f64 = 938277237.2346872346872382368;      // some big value
  long double fn = 923749827983748.23479834783932; // some super big value

  cout << "float: " << f32 << endl;
  cout << "double: " << f64 << endl;
  cout << "long double: " << fn << endl;

  // literal types.
  char u8 = 'h';                     // single character or a literal.
  string channel = "helloworld_275"; // collection of characters.

  cout << "char: " << u8 << endl;
  cout << "string: " << channel << endl;

  // boolean types
  bool followed = true; // a single state; followed or unfollowed.
  cout << boolalpha << "I have followed helloworld_275 on tiktok: " << followed;

  return 0;
}
