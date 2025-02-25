#include <iostream>
#include <limits>
#include "classes.cpp"
using namespace std;

int menu()
{
    int selector;

    cout << "1) See inventory\n";
    cout << "2) Buy supplies\n";
    cout << "3) Set price\n";
    cout << "4) Sell Surplus\n\n";

    cout << "Select an option: ";
    cin >> selector;
    cin.ignore();  
    switch(selector)
    {
        case 1:
            cout << "\nYou Selected See inventory\n\n";
            return 1;
            break;
        case 2:
            cout << "\nYou Selected Buy supplies\n\n";
            break;
        case 3: 
            cout << "\nyou Selected Set price\n\n";
            break;
        case 4: 
            cout << "\nyou Selected Sell Surplus\n\n";
            break;
        default:
            cout << "\nInsert a menun number (1-4)\n";
            cin.clear();
            if(!selector)
            {
                cin.ignore(LONG_MAX, '\n');
            }
            return 0;
    }
    return selector;
}
int main()
{
    int selector;
    inventorySys inv;
    
    cout << "[---Selling Game---]\n\n";
    while (true)
    {
        selector = menu();
        if(selector == 0)
        {
            continue;
        }
        if(selector == 1)
        {
            inv.inventory();
        }
        if(selector == 2)
        {
            inv.supplyMenu();
        }
        if(selector == 3)
        {
            inv.priceMenu();
        }
    }
    return 0;
}