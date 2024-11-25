#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int number;
    while(1)
    {
        cout << "Type a number: ";
    
        if(cin.get() == 10)
        {
            cout << "\nError, type something\n";
            cin.clear();
            cin.ignore(LONG_MAX, '\n');
            continue;
        }
        cin >> number;
        if(!number)
        {
            cout << "Error, type a number\n";
            cin.clear();
            cin.ignore(LONG_MAX, '\n');
            continue;
        }
    }
    
    return 0;
}