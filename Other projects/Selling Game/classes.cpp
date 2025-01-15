#include <iostream>
using namespace std;

class inventorySys
{
    public:
    static string item[5];
    static double price[5];
    static double supplierPrice[5];
    static int itemsBought[5];
    
    void inventory()
    {
        cout << "Inventory\n\n";
        cout << "no. | item\t| price\t| quantity\n";
        for (int itemIndex = 0; itemIndex < 5; itemIndex ++)
        {
            cout << itemIndex + 1 << ")  | " << item[itemIndex] << "\t| " << price[itemIndex] << "\t| " << itemsBought[itemIndex] << "\n";
        }
        cout << "\n";
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
    }

    void select()
    {
        int selector;
        int quantity;
        inventorySys inv;

        cout << "select an item\n";
        cin >> selector;
        switch(selector)
        {
            case 0:
                return;
            case 1:
                cout << "how many " << item[0] << " do you want to buy?\n";
                cin >> quantity;
                cout << "you bought " << quantity << " " << item[0] << "\n";
                inv.itemsBought[0] = quantity;
                break;
            case 2:
                cout << "how many " << item[1] << " do you want to buy?\n";
                cin >> quantity;
                cout << "you bought " << quantity << " " << item[1] << "\n";
                inv.itemsBought[1] = quantity;
                break;
            case 3:
                cout << "how many " << item[2] << " do you want to buy?\n";
                cin >> quantity;
                cout << "you bought " << quantity << " " << item[2] << "\n";
                inv.itemsBought[2] = quantity;
                break;
            case 4:
                cout << "how many " << item[3] << " do you want to buy?\n";
                cin >> quantity;
                cout << "you bought " << quantity << " " << item[3] << "\n";
                inv.itemsBought[3] = quantity;
                break;
            case 5:
                cout << "how many " << item[4] << " do you want to buy?\n";
                cin >> quantity;
                cout << "you bought " << quantity << " " << item[4] << "\n";
                inv.itemsBought[4] = quantity;
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
    }
};