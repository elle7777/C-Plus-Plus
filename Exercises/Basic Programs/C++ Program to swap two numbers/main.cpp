// Swap two numbers
// version 0.1.0
// @Iustin Desrobitu

#include <iostream>

using namespace std;
int main()
{
    int number_1 = 5;
    int number_2 = 2;
    int temp_number = 0;
    
    cout << "This program swaps two numbers" << endl;
    cout << "numbers before the swap: " << endl;
    cout << "Insert the 1st number: "; cin >> number_1;
    cout << "Insert the 2nd number: "; cin >> number_2;

    temp_number = number_1;
    number_1 = number_2;
    number_2 = temp_number;

    cout << "numbers after the swap: " << endl;
    cout << "1st number: " << number_1 << endl;
    cout << "2nd number: " << number_2 << endl;
}