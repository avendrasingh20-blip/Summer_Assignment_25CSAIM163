#include<iostream>
using namespace std;

int main()
{
    int n;
    long long sum = 0;
    cout << "Enter a positive integer (N):";
    cin >> n;
    if (n <= 0)
    {
        cout << "please enter a positive interger greater than 0." << endl;

    }
    else
    {
        for(int i = 1; i <= n; ++i)
        {
            sum += i;
        }
        cout << "The sum of the first" << n << "natural numbers is:" << sum << endl;

    }
    return 0;

}
