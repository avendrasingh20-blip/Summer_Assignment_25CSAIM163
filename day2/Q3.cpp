#include<iostream>
using namespace std;

int main()
{
    int n, product=1;
    cout<<"enter a number:";
    cin>>n;

    if(n==0)
    {
        product=0;
    }
    while(n!=0){
        product*=n%10;
        n/=10;
    }
    cout<<"product of digits:"<<product<<endl;
    return 0;
}