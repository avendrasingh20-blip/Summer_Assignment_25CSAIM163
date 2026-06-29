#include <iostream>
using namespace std;

struct Contact

{
    char name[50];
    char phone[15];
    char email[50];

};

int main() 

{
    Contact c;

    cout << "Enter Name: ";
   
    cin >> c.name;

    cout << "Enter Phone Number: ";
  
    cin >> c.phone;

   
    cout << "Enter Email: ";
    cin >> c.email;

    cout << "\n--- Contact Details ---\n";
   
    cout << "Name  : " << c.name << endl;
    cout << "Phone : " << c.phone << endl;
    cout << "Email : " << c.email << endl;

    return 0;
}