// Leap Year
// verion 0.1.0
// @Iustin Desrobitu

#include <iostream>

using namespace std;

bool leapYearChecker(int year)
{
    if (year % 400 == 0)
    {
        return true;
    }
    else if (year % 100 == 0)
    {
        return false;
    }
    else if (year % 4 == 0) 
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int year;

    cout << "This program check if an year is a leap year" << endl;\
    cout << "Insert a year: ";
    cin >> year;

    bool check = leapYearChecker(year);
    if(check == true)
    {
        cout << year << " Is a leap year" << endl;
    }
    else
    {
        cout << year << " Is not a leap year" << endl;
    }
    
    return 0;
}