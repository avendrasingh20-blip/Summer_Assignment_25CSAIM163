#include<iostream>
using namespace std;

int main()
{
    int n, rev=0, original;

    cout<<"enter anumber:";
    cin>>n;
    original=n;
    while(n!=0)
    {
        rev=rev*10+n%10;
        n/=10;
    }
    if(original==rev){
        cout<<original<<"is a palindrom."<<endl;
    }
    else{
        cout<<original<<"is not a palindrome."<<endl;
    }
    return 0;
}