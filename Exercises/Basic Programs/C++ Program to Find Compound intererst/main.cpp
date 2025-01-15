// Compound Interest
// Version 0.1.0
// @Iustin Desrobitu

#include <iostream>
#include <cmath>

using namespace std;

double compoundInterest(double amount, double rate, int time)
{
    double finalAmount = amount * pow((1 + rate / 100), time);
    double compoundInterest = finalAmount - amount;
    return compoundInterest;
}

int main()
{
    double initialAmount;
    double interestRate;
    int interestTime;
    double finalInterest;

    cout << "This program finds compound interest" << endl;
    cout << "Insesrt and amount: ";
    cin >> initialAmount;
    cout << "Insert the interest rate: ";
    cin >> interestRate;
    cout << "Insert the year of interests: ";
    cin >> interestTime;

    finalInterest = compoundInterest(initialAmount, interestRate, interestTime);
    cout << "Your Interest after " << interestTime << " is " << finalInterest << "£ " << endl;

    return 0;
}