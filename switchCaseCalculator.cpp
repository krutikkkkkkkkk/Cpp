#include <iostream>
using namespace std;

int main() {
    int num1,num2;
    char op;

    cout << "Enter 1st Number: " << endl;
    cin >> num1;
    cout << "Enter 2nd Number: " << endl;
    cin >> num2;
    cout << "Enter Opeartor: " << endl;
    cin >> op;

    switch(op) {

        case '+':
        cout << num1 << "+" << num2 << "=" << num1+num2;
        break;

        case '-':
        cout << num1 << "-" << num2 << "=" << num1-num2;
        break;

        case '*':
        cout << num1 << "*" << num2 << "=" << num1*num2;
        break;

        case '/':
        cout << num1 << "/" << num2 << "=" << num1/num2;
        break;

        default:
        cout << "Enter Valid Opeartor [+,-,*,/]";

    }


    return 0;
}
