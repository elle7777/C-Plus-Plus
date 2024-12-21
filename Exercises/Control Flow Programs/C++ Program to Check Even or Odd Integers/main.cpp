// Even or Odd
// version 0.1.0
// @Iustin Desrobitu

#include <iostream>

using namespace std;
bool oddFinder(int number)
{
    if(number % 2 != 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    int number;

    cout << "This Program Checks If a number is Even or Odd" << endl;
    cout << "Insert a number: "; 
    cin >> number;

    if(oddFinder(number) == true)
    {
        cout << "The number is Even";
    }
    else
    {
        cout << "the number id Odd";
    }

    return 0;
}