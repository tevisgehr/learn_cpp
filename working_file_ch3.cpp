#include <iostream>
#include <cmath>
#include <bitset>

int add(int x, int y) {
  // Adds integers x and y together.
  return x + y;
}

int multiply(int x,int y) {
  return x * y;
}

void learn_cpp_3_4(){
  int x = 2;
  int y = 5;
  //std::cout << multiply(add(2,1),add(x,y));
  //std::cout << sizeof(x) << std::endl;
  //int z = (1,2); //interesting result due to comma operator
  //gives a warning when compiled with g++
  //This comma is an operator and is different from the comma
  //separating args in a function call.
  //Dont use it.
  //std::cout << z << std::endl;
  //Conditional: (condition) ? expression : other_expression;
  bool a(true);
  int z(0);
  z = a ? x : y; //shorthand binary if
  std::cout << z << std::endl;
}

bool approximately_equal(double a, double b, double epsilon){
  //Determines whether the difference between a and b is within
  //epsilon percent of the larger of a or b.
  return fabs(a - b) <= ((fabs(a) < fabs(b) ? fabs(b) : fabs(a))*epsilon);
}

void learn_cpp_3_5(){
  std::cout << "Enter an integer: ";
  int x;
  std::cin >> x;

  std::cout << "Enter another integer: ";
  int y;
  std::cin >> y;

  if (x == y)
      std::cout << x << " equals " << y << "\n";
  if (x != y)
      std::cout << x << " does not equal " << y << "\n";
  if (x > y)
      std::cout << x << " is greater than " << y << "\n";
  if (x < y)
      std::cout << x << " is less than " << y << "\n";
  if (x >= y)
      std::cout << x << " is greater than or equal to " << y << "\n";
  if (x <= y)
      std::cout << x << " is less than or equal to " << y << "\n";

  double d1(100 - 99.99); // should equal 0.01
  double d2(10 - 9.99); // should equal 0.01

  if (d1 == d2)
      std::cout << "d1 == d2" << "\n";
  else if (d1 > d2)
      std::cout << "d1 > d2" << "\n";
  else if (d1 < d2)
      std::cout << "d1 < d2" << "\n";

  std::cout << "d1 = " << d1 << " d2 = " << d2 << "\n";
  //Be careful using <,>,<=,>= operators with floating point variables.
  //Do not use == or != with fp vars.
  std::cout << "Using approximately_equal:";
  if (approximately_equal(d1,d2,0.1))
      std::cout << "d1 == d2" << "\n";
  else if (d1 > d2)
      std::cout << "d1 > d2" << "\n";
  else if (d1 < d2)
      std::cout << "d1 < d2" << "\n";
}

void hexadecimal(){
    int x = 0x80; // 0x before the number means this is hexadecimal
    std::cout << x;
}

void learn_cpp_3_8(){
  unsigned char option_viewed = 0x01;
  unsigned char option_edited = 0x02;
  unsigned char option_favorited = 0x04;
  unsigned char option_shared = 0x08;
  unsigned char option_deleted = 0x80;

  unsigned char myArticleFlags = 0;
  std::cout << myArticleFlags << "\n";

  myArticleFlags |= option_viewed;
  myArticleFlags |= option_deleted;
  myArticleFlags |= option_favorited;

  std::bitset<8> x(myArticleFlags);
  std::cout << x << "\n";

  std::bitset<8> y(~option_favorited);
  std::cout << y << "\n";

  myArticleFlags &= ~option_favorited;
  std::bitset<8> z(myArticleFlags);
  std::cout << z << "\n";

  std::cout << "Deleted:" << ((myArticleFlags & option_deleted) != 0) << "\n";

}

int main() {
  learn_cpp_3_8();

  return 0;
}
