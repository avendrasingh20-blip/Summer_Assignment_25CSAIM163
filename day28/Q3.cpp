#include <iostream>
using namespace std;

int main() 

{
    char name[50];
  
    int tickets;
    float price = 200, total;

  
    cout << "Enter Customer Name: ";
  
    cin >> name;

    cout << "Enter Number of Tickets: ";
   
    cin >> tickets;

    total = tickets * price;

    cout << "\n--- Ticket Details ---\n";
    cout << "Customer Name : " << name << endl;
    cout << "Tickets       : " << tickets << endl;
   
    cout << "Total Amount  : " << total << endl;

    return 0;
}