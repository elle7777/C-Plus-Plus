// Fahrenheit to Celsius
// version 0.1.0
// @Iustin Desrobitu

#include <iostream>

double converter(double userFar)
{
    double userCel;
    userCel = (userFar - 32) * 5 / 9;
    return userCel;
}

using namespace std;
int main()
{
    double userFar;
    double userCel;
    cout << "This program take degrees in Fahreniheit and converts it to Celsius" << endl;
    cout << "Insert a temperature in Fahreniheit: "; cin >> userFar;
    
    userCel = converter(userFar);
    cout << userFar << " Fahrenheit is " << userCel << " Celsius" << endl;
}