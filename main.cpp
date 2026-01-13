#include <iostream>
using namespace std;

int main() {

    int num1;
    int num2;
    int sum;
    string firstName;
    string lastName;
    string fullName;

    cout << "Calculator Example" << endl;
    cout << "What is the first number? ";

    cin >> num1;
    cout << "What is the second number? ";

    cin >> num2;

    sum = num1 + num2;

    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;


    cout << "Type in your first name:";
    cin >> firstName;
    cout << "Type in your last name:";
    cin >> lastName;

    fullName = firstName + " " + lastName;

    cout << "Hello " << firstName << " " << lastName << endl;
    cout << "Your full name is " << fullName << endl;


    return 0;
}