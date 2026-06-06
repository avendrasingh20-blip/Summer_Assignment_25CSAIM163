#include<iostream>
using namespace std;

int main()
{
    int n, sum=0;

    cout<<"Enter a number:";
    cin>>n;
    while(n!=0)
    {
        sum += n%10;//extract the last digit and add to sum
        n/=10; //remove the last digit 
    }
    cout << "sum of digitrs:"<<sum <<endl;
    return 0;


}