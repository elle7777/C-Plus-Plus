// Multiplication Table
// version 0.1.0
// @Iustin Desrobitu

#include <iostream>

using namespace std;
void multiplicationTable(int multiplicand)
{
    int product;
    for(int multiplier = 1; multiplier < 11; multiplier++)
    {
        product = multiplicand * multiplier;
        cout << multiplicand << " x " << multiplier << " = " << product << endl;
    }
}
int main()
{
    int multiplicand;
    cout << "This program finds the multiplication table of a number" << endl;
    cout << "Insert a number: ";
    cin >> multiplicand;
    multiplicationTable(multiplicand);

    return 0;
}