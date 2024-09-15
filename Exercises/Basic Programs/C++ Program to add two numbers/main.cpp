// Add two numbers
// version 0.1.0
// @Iustin Desrobitu

#include <iostream>

using namespace std;
int main()
{
    int number_1 = 0;
    int number_2 = 0;
    
    cout << "This program take two numbers and adds them together" << endl;
    cout << "Insert a number: "; cin >> number_1;
    cout << "Insert a number: "; cin >> number_2;

    int sum = number_1 + number_2;

    cout << number_1 << " + " << number_2 << " = " << sum << endl;
}