// Value of Char
// version 0.1.0
// @Iustin Desrobitu

#include <iostream>

using namespace std;
int main()
{
    char userChar;
    int userInt;
    cout << "This program takes a character and returns the its ASCII value" << endl;
    cout << "Insert a character: "; cin >> userChar;

    userInt = userChar;

    cout << "The ASCII Value of " << userChar << " is " << userInt << endl;
}