#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter Any Year: " <<endl;
    cin >> year;

    if( year % 400 == 0)
    cout << year <<" is a Leap Year";
    else
    cout << year <<" is a not Leap Year";
    return 0;
}
