#include <iostream>
using namespace std;

bool isPalindrome(int num)
{
    int original = num, reverse = 0, rem;

    while (num > 0)
   
    {

        rem = num % 10;
        reverse = reverse * 10 + rem;
   
        num /= 10;
    }


  
    return (original == reverse);
}


int main()

{
   
    int num;
    cout << "Enter a number: ";
    cin >> num;
    

    if (isPalindrome(num))
        cout << "Palindrome Number";
     
        else
      
        cout << "Not a Palindrome Number";

    return 0;
}