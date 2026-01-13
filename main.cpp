#include <iostream>
using namespace std;

int main() {

    int num1;
    int num2;
    int sum;

    cout << "Calculator Example" << endl;
    cout << "What is the first number? ";

    cin >> num1;
    cout << "What is the second number? ";

    cin >> num2;

    sum = num1 + num2;

    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;
    return 0;
}