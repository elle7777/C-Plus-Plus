// Factorial of a number
// verison 0.1.0
// @Iustin Desrobitu

#include <iostream>

using namespace std;

int factorialFinder(int number)
{
    int factorial;
    factorial = number;
    for(int index = number - 1; index > 1; index--)
    {
        factorial = factorial * index;
    }
    return factorial;
}
int main()
{
    int number;
    int factorial;

    cout << "This program find the factorial of a positive number" << endl;
    cout << "Insert a number: ";
    cin >> number;
    
    factorial = factorialFinder(number);

    cout << "!" << number << " (factorial) = " << factorial;

    return 0;
}