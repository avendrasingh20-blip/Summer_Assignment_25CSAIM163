#include <iostream>
using namespace std;

int main()

{
    char name[50];
    int accNo;
    float balance, deposit, withdraw;

    cout << "Enter Account Number: ";
    cin >> accNo;

    cout << "Enter Account Holder Name: ";
    cin >> name;

    cout << "Enter Initial Balance: ";
    cin >> balance;

    cout << "Enter Deposit Amount: ";
    cin >> deposit;
    balance += deposit;

    cout << "Enter Withdrawal Amount: ";
    cin >> withdraw;

    if (withdraw <= balance)
        balance -= withdraw;
    else
        cout << "Insufficient Balance!\n";

    cout << "\n--- Account Details ---\n";
    cout << "Account No : " << accNo << endl;
    cout << "Name       : " << name << endl;
    cout << "Balance    : " << balance << endl;

    return 0;
}