#include <iostream>

using namespace std;

int main () {
  float number1, number2, result;

  cout << "Enter Number to Devide: ";
  cin >> number1;
  cout << "Enter 2nd Number to Devide: ";
  cin >> number2;

  result = number1 / number2;

  cout << "The Quotient is: " << result << endl;

  return 0;
}