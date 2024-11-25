#include <iostream>
#include <limits>
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
void enterToContinue()
{
    cout << "Enter to Continue";
    if(cin.get() == 10){}
    else
    {
        enterToContinue();
    }
}
void inventory()
{
    string item[5] = {"apples", "oranges", "bananas", "plums", "peaches"};
    double price[5] = {0.50, 0.70, 0.80, 1.00, 1.20};
    int quantity[5] = {0, 0 ,0 ,0 ,0};

    cout << "Your Inventory: \n\n";
    cout << "item\t|\tquantity\t|\tprice\n\n";
    //cout << "----\t--------\t-----\t\n\n";
    for (int itemIndex = 0; itemIndex < 5; itemIndex ++)
    {
        cout << item[itemIndex] << "\t|\t" << quantity[itemIndex] << "\t\t|\t£" << price[itemIndex] << "\n";
    }
    cout << "\n";
}
int buySupplies()
{
    return 0;
}
int main()
{
    int selector; 
    string item[5] = {"apples", "oranges", "bananas", "plums", "peaches"};
    double price[5] = {0.50, 0.70, 0.80, 1.00, 1.20};
    int quantity[5] = {0, 0 ,0 ,0 ,0};

    cout << "[---Selling Game---]\n\n";
    while (true)
    {
        selector = menu();
        if(selector == 0) {continue;}
        enterToContinue();
        if(selector == 1) {inventory();}
        enterToContinue();
    }
    return 0;
}