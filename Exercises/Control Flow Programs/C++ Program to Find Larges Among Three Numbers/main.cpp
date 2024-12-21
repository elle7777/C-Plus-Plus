// Largest of three numbers
// version 0.1.0
// @Iustin Desrobtiu

#include <iostream> 

using namespace std;

double numberComparator(double first, double second, double third)
{
    if(first > second && first > third)
    {
        return first;
    }
    else if(second > first && second > third)
    {
        return second;
    }
    else if(third > first && third > second)
    {
        return third;
    }

}

int main()
{
    double firstNumber;
    double secondNumber;
    double thirdNumber;
    double biggestNumber;

    cout << "This Program find the biggest of three numbers" << endl;
    cout << "Insert the first number: ";
    cin >> firstNumber;
    cout << "Insert the second number: ";
    cin >> secondNumber;
    cout << "Insert the third number: ";
    cin >> thirdNumber;

    biggestNumber = numberComparator(firstNumber, secondNumber, thirdNumber);

    cout << "The biggest number is " << biggestNumber << endl;

    return 0;
}