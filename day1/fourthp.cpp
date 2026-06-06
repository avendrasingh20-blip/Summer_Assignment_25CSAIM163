#include<iostream>
#include <cmath>

using namespace std;
int main()
{
    long long num;
    int count = 0;
    cout << "enter an integer:";
    cin >> num;

    if (num == 0)
    {
        count = 1;
    }
    else{
        long long temp = abs(num);
        while (temp > 0)
        {
            temp = temp / 10;
            count++;
        }
    }
    cout << "Number of digits: " << count << count << endl;
    return 0;
}
