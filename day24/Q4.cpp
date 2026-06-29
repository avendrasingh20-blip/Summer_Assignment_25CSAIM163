#include <iostream>
#include <string>

using namespace std;

int main() 

{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    bool visited[256] = {false};

    cout << "String after removing duplicates: ";

    for (char ch : str) 
   
    {
        if (!visited[ch]) 
       
        {
            cout << ch;
            
            visited[ch] = true;
        }
    }

    return 0;
}