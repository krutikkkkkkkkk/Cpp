#include <iostream>
using namespace std;

int main() {
    int number, remainder;

    cout << "Enter any Number: " << endl;
    cin >> number;

    remainder = number % 2;
    if (remainder == 0) 
        cout << number << " is an Even Number." << endl;
    else 
        cout << number << " is an Odd Number.";

return 0;
}
