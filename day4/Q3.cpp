#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int num, temp, remainder, digits = 0;
    int result = 0;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    while(temp != 0)
     {
        digits++;
        temp /= 10;
    }

    temp = num;

    while(temp != 0) 
    {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp /= 10;
    }

    if(result == num)
        cout << num << " is an Armstrong Number.";
    else
        cout << num << " is not an Armstrong Number.";

    return 0;
}