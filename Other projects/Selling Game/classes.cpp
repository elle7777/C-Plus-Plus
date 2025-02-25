#include <iostream>
using namespace std;

class inventorySys
{
    private:
    string item[5] = {"apples", "oranges", "bananas", "plums", "peaches"};
    double prices[5] = {0.5, 0.7, 0.4, 0.3, 0.6};
    double supplierPrices[5] = {0.05, 0.07, 0.04, 0.03, 0.06};
    int itemsBought[5] = {0, 0, 0, 0, 0};
    
    public:
    void inventory()
    {
        cout << "[---Inventory---]\n";
        cout << "no. | item\t| price\t| quantity\n";
        for (int itemIndex = 0; itemIndex < 5; itemIndex++)
        {
            cout << itemIndex + 1 << ")  | " << item[itemIndex] << "\t| " << prices[itemIndex] << "\t| " << itemsBought[itemIndex] << "\n";
        }
        cout << "\n";
        enterToContinue();
        return;
    }
    void buySupply(int itemIndex)
    {
        int quantity;
        inventorySys inv;
        
        cout << "how many " << item[itemIndex] << " do you want to buy?: ";
        cin >> quantity;
        
        if(quantity == 0)
        {
            cin.clear();
            return;
        }

        if(!quantity || quantity > 999)
        {
            cout << "insert a whole number less than 999\n";
            cin.clear();
            cin.ignore(LONG_MAX, '\n');
            buySupply(itemIndex);
        }
        
        cout << "you bought " << quantity << " " << item[3] << "\n\n";
        buyItems(itemIndex, quantity);
        return;
    }
    void supplyMenu()
    {
        int selector;

        cout << "[---The Supplier---]\n";
        cout << "no. | item\t| price\n";
        for (int itemIndex = 0; itemIndex < 5; itemIndex++)
        {
            cout << itemIndex + 1 << ")  | " << item[itemIndex] << "\t| " << prices[itemIndex] << "\n";
        }
        cout << "0) Exit\n\n";

        cout << "Select an item to buy: ";
        cin >> selector;
        if(selector == 0)
        {
            cin.clear();
            enterToContinueIn();
            return;
        }
        if(!selector || selector > 6)
        {
            cout << "error, insert a number 1-5\n";
            cin.ignore(LONG_MAX, '\n');
            supplyMenu();
        }
        switch (selector)
        {
            case 1:
                buySupply(0);
                break;
            case 2:
                buySupply(1);
                break;
            case 3:
                buySupply(2);
                break;
            case 4:
                buySupply(3);
                break;
            case 5: 
                buySupply(4);
                break;
        }
        cin.clear();
        cin.ignore(LONG_MAX, '\n');
        enterToContinue();
        return;
    }
    void changePrice(int priceIndex)
    {
        double price;
        inventorySys inv;
        
        cout << "Set the price for " << item[priceIndex] << ": ";
        cin >> price;

        if(price == 0)
        {
            cin.clear();
            return;
        }
        if(!price || price > 999 || price < 0)
        {
            cout << "insert a number grater than 0 and lowe than 999\n";
            cin.clear();
            cin.ignore(LONG_MAX, '\n');
            changePrice(priceIndex);
        }

        cout << "The new price for " << item[priceIndex] << " is " << price << "\n\n";
        setPrice(priceIndex, price);
        return;

    }
    void priceMenu() 
    {
        int selector;

        cout << "Inventory\n\n";
        cout << "no. | item\t| price\n";
        for (int itemIndex = 0; itemIndex < 5; itemIndex++)
        {
            cout << itemIndex + 1 << ")  | " << item[itemIndex] << "\t| " << prices[itemIndex] << "\n";
        }
        cout << "0) Exit\n\n";

        cout << "select an item: ";
        cin >> selector;
        if(selector == 0)
        {
            cin.clear();
            enterToContinueIn();
            return;
        }
        if(!selector || selector > 5 || selector < 0)
        {
            cout << "error, insert a number 1-5\n";
            cin.clear();
            cin.ignore(LONG_MAX, '\n');
            priceMenu();
        }
        switch(selector)
        {
            case 1:
                changePrice(0);
                break;
            case 2:
                changePrice(1);
                break;
            case 3:
                changePrice(2);
                break;
            case 4:
                changePrice(3);
                break;
            case 5:
                changePrice(4);
                break;
        }
        cin.clear();
        cin.ignore(LONG_MAX, '\n');
        enterToContinue();
        return;
    }
    private:
    double setPrice(int index, double price)
    {
        this->prices[index] = price;
        return 0;
    }
    int buyItems (int itemIn, int itemQ)
    {
        this->itemsBought[itemIn] = itemQ;
        return 0;
    }
    void enterToContinue()
    {
        cout << "Enter to Continue";
        if(!cin.get() == 10)
        {
            enterToContinue();
        }
        cout << "\n";
    }
    void enterToContinueIn()
    {
        cout << "Enter to Continue";
        cin.ignore(LONG_MAX, '\n');
        if(!cin.get() == 10)
        {
            enterToContinueIn();
        }
        cout << "\n";
    }
};