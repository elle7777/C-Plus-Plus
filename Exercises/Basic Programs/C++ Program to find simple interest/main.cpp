// Simple Interest 
// version 0.1.0
// @Iustin Desrobitu

#include <iostream>

using namespace std;
double interestCalculator(double initialAmount, double interestRate, int interestTime)
{
    double finalAmount = (initialAmount * interestRate * interestTime) / 100;
    return finalAmount;
}
int main()
{
p1:
    double initialAmount; 
    double interestRate; //percentage
    int interestTime; //years

    cout << "This program finds simple interest" << endl;
    cout << "Insert the initial Amount: ";
    cin >> initialAmount;
    cout << "insert the years of interest: ";
    cin >> interestTime;
    cout << "insert the interest rate: ";
    cin >> interestRate;
    
    double finalAmount = interestCalculator(initialAmount, interestRate, interestTime);
    cout << "Your amount after " << interestTime << " is " << finalAmount << "$" << endl;
    goto p1;
}