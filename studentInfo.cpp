#include <iostream>
using namespace std;

struct student {
    char name[20];
    char address[30];
    long contact;
};

int main() {
    student s;
    cout << "Enter Information" << endl;
    cout << "Enter Name: " << endl;
    cin>>s.name;                                                          

    cout << "Enter Address: " << endl;
    cin>>s.address;

    cout << "Enter Contact Number: " << endl;
    cin>>s.contact;

    cout << "\nDisplaying Information: " << endl;

    cout << "Name: "<<s.name << endl;     
    cout << "Address: "<<s.address << endl;     
    cout << "Contact: "<<s.contact ;     
    return 0;
}
