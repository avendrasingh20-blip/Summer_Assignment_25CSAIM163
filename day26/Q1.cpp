#include <iostream>
using namespace std;

int main() 

{
    int secret = 25, guess;

    cout << "Guess the number (1-50): ";

    do 
    
    {
        cin >> guess;

        if (guess > secret)
            cout << "Too High! Try Again: ";
        else if (guess < secret)
            cout << "Too Low! Try Again: ";

    } while (guess != secret);

    cout << "Congratulations! You guessed the correct number.";

    return 0;
}