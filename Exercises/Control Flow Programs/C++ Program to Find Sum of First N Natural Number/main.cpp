// Sum of naturnal numbers
// verions 0.1.0
// @Iustin Desrobitu

#include <iostream>
using namespace std;
int numberSum(int number)
{
    int sum = 1;

    cout << "1";
    for(int index = 2; index < number + 1; index++)
    {
        sum = sum + index;
        cout << " + " << index;   
    }
    cout << " = " << sum;
    return sum;
}
int main()
{
    int number;
    int sum;

    cout << "This program finds the sum of the first n natural numbers" << endl;
    cout << "Insert the number: ";
    cin >> number;
    
    sum = numberSum(number);

    return 0;
}