#include <iostream>
using namespace std;

class inventorySys
{
    private:
    string item[5] = {"apples", "oranges", "bananas", "plums", "peaches"};
    double price[5] = {0.5, 0.7, 0.4, 0.3, 0.6};
    double supplierPrice[5] = {0.05, 0.07, 0.04, 0.03, 0.06};
    int itemsBought[5] = {0, 0, 0, 0, 0};
    
    public:
    void inventory()
    {
        cout << "Inventory\n\n";
        cout << "no. | item\t| price\t| quantity\n";
        for (int itemIndex = 0; itemIndex < 5; itemIndex ++)
        {
            cout << itemIndex + 1 << ")  | " << item[itemIndex] << "\t| " << price[itemIndex] << "\t| " << itemsBought[itemIndex] << "\n";
        }
        cout << "\n\n";
    }
    void supplier()
    {
        cout << "The Supplier\n\n";
        cout << "no. | item\t| price\n";
        for (int itemIndex = 0; itemIndex < 5; itemIndex ++)
        {
            cout << itemIndex + 1 << ")  | " << item[itemIndex] << "\t| " << price[itemIndex] << "\n";
        }
        cout << "0) Exit\n\n";
        buySupplies();
    }
    void inventoryPrices() 
    {
        cout << "Inventory\n\n";
        cout << "no. | item\t| price\n";
        for (int itemIndex = 0; itemIndex < 5; itemIndex ++)
        {
            cout << itemIndex + 1 << ")  | " << item[itemIndex] << "\t| " << price[itemIndex] << "\n";
        }
        cout << "0) Exit\n\n";
        setPrices();
    }
    int buyItems (int itemIn, int itemQ)
    {
        this->itemsBought[itemIn] = itemQ;
        return 0;
    }
    void buySupplies()
    {
        int selector;
        int quantity;
        inventorySys inv;

        cout << "select an item: ";
        cin >> selector;
        switch(selector)
        {
            case 0:
                return;
            case 1:
                cout << "how many " << item[0] << " do you want to buy?: ";
                cin >> quantity;
                cout << "you bought " << quantity << " " << item[0] << "\n\n";
                buyItems(0, quantity);
                break;
            case 2:
                cout << "how many " << item[1] << " do you want to buy?: ";
                cin >> quantity;
                cout << "you bought " << quantity << " " << item[1] << "\n\n";
                buyItems(1, quantity);
                break;
            case 3:
                cout << "how many " << item[2] << " do you want to buy?: ";
                cin >> quantity;
                cout << "you bought " << quantity << " " << item[2] << "\n\n";
                buyItems(2, quantity);
                break;
            case 4:
                cout << "how many " << item[3] << " do you want to buy?: ";
                cin >> quantity;
                cout << "you bought " << quantity << " " << item[3] << "\n\n";
                buyItems(3, quantity);
                break;
            case 5:
                cout << "how many " << item[4] << " do you want to buy?: ";
                cin >> quantity;
                cout << "you bought " << quantity << " " << item[4] << "\n\n";
                buyItems(4, quantity);
                break;
            default:
                cout << "\nInsert a menun number (1-4)\n";
                cin.clear();
                if(!selector)
                {
                    cin.ignore(LONG_MAX, '\n');
                }
                break;
        }
        return;
    }
    void setPrices()
    {
        int selector;
        double price;

        cout << "select an item: ";
        cin >> selector;
        switch(selector)
        {
            case 0:
                return;
            case 1:
            cout << "Set the price for " << item[0] << " : ";
            cin >> price;
            cout << "the price of " << item[0] << " is set to " << price[0] << " \n";

        }
    }
};