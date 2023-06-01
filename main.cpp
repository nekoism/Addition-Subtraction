#include <iostream>
using namespace std;
int main() {
  int userChoice;
   cout << "Enter your Choice, 1 for addition, 2 for subtraction : ";
  cin >> userChoice;
  int firstNumber, secondNumber;
  if(userChoice == 1) {
    cout << "Enter first number: ";
    cin >> firstNumber;
    cout << "Enter second number: ";
    cin >> secondNumber;
    cout << "The sum of " << firstNumber << " and " << secondNumber << " is " << firstNumber + secondNumber << endl;
  }else if(userChoice == 2) {
    cout << "Enter first number: ";
    cin >> firstNumber;
    cout << "Enter second number: ";
    cin >> secondNumber;
    cout << "The difference of " << firstNumber << " and " << secondNumber << " is " << firstNumber - secondNumber << endl;
  }else{
    cout << "Invalid choice, please try again.";
  }
}
