#include <iostream>
#include <stdlib.h>
using namespace std;

class inventorySys
{
    private:
    string item[5] = {"apples", "oranges", "bananas", "plums", "peaches"};
    double prices[5] = {0.5, 0.7, 0.4, 0.3, 0.6};
    double supplierPrices[5] = {0.5, 0.7, 0.4, 0.3, 0.6};
    int itemsBought[5] = {20, 20, 20, 20, 20};
    double bankAccount = 1000.00;
    
    public:
    void inventory()
    {
        cout << "[---Inventory---]\n";
        cout << "no. | item\t| price\t| quantity\n";
        for (int itemIndex = 0; itemIndex < 5; itemIndex++)
        {
            cout << itemIndex + 1 << ")  | " << item[itemIndex] << "\t| " << prices[itemIndex] << "\t| " << itemsBought[itemIndex] << "\n";
        }
        cout << "Account Balance: " << bankAccount << "$\n";
        cout << "\n";
        enterToContinue();
        return;
    }
    void buySupply(int itemIndex)
    {
        int quantity = 0;
        inventorySys inv;
        
        cout << "how many " << item[itemIndex] << " do you want to buy?: ";
        cin >> quantity;
        
        double moneySpent = supplierPrices[itemIndex] * quantity;

        if(quantity == 0)
        {
            cin.clear();
            return;
        }
        if(bankAccount - quantity <= 0)
        {
            cout << "Error, you don't have enough money\n";
            enterToContinueIn();
            return;
        }
        cout << "you bought " << quantity << " " << item[itemIndex] << "\n\n";
        buyItems(itemIndex, quantity, moneySpent);
        return;
    }
    void supplyMenu()
    {
        int selector;

        cout << "[---The Supplier---]\n";
        cout << "no. | item\t| price\n";
        for (int itemIndex = 0; itemIndex < 5; itemIndex++)
        {
            cout << itemIndex + 1 << ")  | " << item[itemIndex] << "\t| " << supplierPrices[itemIndex] << "\n";
        }
        cout << "0) Exit\n";
        cout << "Account Balance: " << bankAccount << "$\n\n";

        cout << "Select an item to buy: ";
        cin >> selector;
        if(selector == 0)
        {
            cin.clear();
            enterToContinueIn();
            return;
        }
        if(!selector) 
        {
            cin.ignore(LONG_MAX, '\n');
            cin.clear();
            return;
        }
        if(selector > 6 || selector == 0 )
        {
            cout << "error, insert a number 1-5\n";
            cin.ignore(LONG_MAX, '\n');
            cin.clear();
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
        cout << "0) Exit\n";
        cout << "Account Balance: " << bankAccount << "$\n\n";
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
    void sellSurplus(int index)
    {
        int quantity;

        cout << "how many " << item[index] << " would you want to sell?: ";
        cin >> quantity;
        double moneyEarned = quantity * prices[index];

        if(quantity == 0)
        {
            cin.clear();
            return;
        }
        if(!quantity || quantity > 999 || quantity < 0)
        {
            cout << "insert a number grater than 0 and lowe than 999\n";
            cin.clear();
            cin.ignore(LONG_MAX, '\n');
            sellSurplus(index);
        }
        if(itemsBought[index] - quantity < 0)
        {
            cout << "you don't have enough " << item[index] << " to sell\n";
            cin.clear();
            cin.ignore(LONG_MAX, '\n');
            sellSurplus(index);
        }
        sellSurplus(index, quantity, moneyEarned);
        cout << item[index] << " quantity is " << itemsBought[index] << "\n\n";
        return;
    }
    void surplusMenu()
    {
        int selector;

        cout << "[---Sell Surplus---]\n";
        cout << "no. | item\t| price\t| quantity\n";
        for (int itemIndex = 0; itemIndex < 5; itemIndex++)
        {
            cout << itemIndex + 1 << ")  | " << item[itemIndex] << "\t| " << prices[itemIndex] << "\t| " << itemsBought[itemIndex] << "\n";
        }
        cout << "0) Exit\n";
        cout << "Account Balance: " << bankAccount << "$\n\n";
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
            surplusMenu();
        }
        switch(selector)
        {
            case 1:
                sellSurplus(0);
                break;
            case 2:
                sellSurplus(1);
                break;
            case 3: 
                sellSurplus(2);
                break;
            case 4:
                sellSurplus(3);
                break;
            case 5:
                sellSurplus(4);
                break;
        }   
        cin.clear();
        cin.ignore(LONG_MAX, '\n');
        enterToContinue();
        return;            
    }
    void endDay()
    {
        double customerPreference = 0.5;
        //double customerBudget = 10;
        int customerNumbers = 10;
        double customerInterest;
        int itemDice;
        int amountDice;
        double amount;
        int shelf = itemsBought[0];
        int customerAmount = rand() % 5 + 1;
        cout << "Customers: " << customerAmount << "\n\n";

        for(int n = 0; n < customerAmount; n++)
        {
            while(true) 
            {
                itemDice = rand() % 4 + 0;
                amountDice = rand() % 6 + 1;
                double customerBudget = 10;  
                int intInterest = customerInterest;
                amount = (amountDice * intInterest) / 100;
                customerInterest = (customerPreference / prices[itemDice]) * 100;

                cout << "item draw: " << item[itemDice] << " -|- ";
                cout << "Customer interest: " << intInterest << "% -|- ";
                cout << "Dice draw: " << itemDice << "\n";
                
                cout << "Shelf: " << itemsBought[itemDice] << " -|- ";
                cout << "Amount: " << amount << "\n";

                double maxAmount = customerBudget / prices[itemDice];
                double maxBudget = prices[itemDice] * maxAmount;
                customerBudget -=(itemsBought[itemDice] * prices[itemDice]);

                cout << "MaxAmount: " << maxAmount << " -|- ";
                cout << "MaxBudget: " << maxBudget << "$ -|- ";
                cout << "CustomerBudget: " << customerBudget << "$\n\n";

                if((customerBudget - (amount * prices[itemDice]) < 0) || itemsBought[itemDice] - amount < 0)
                {
                    //cout << "MaxAmount: " << maxAmount << "$ -|- ";
                    //cout << "MaxBudget: " << maxBudget << "$\n";
                    itemsBought[itemDice] -= itemsBought[itemDice];
                    //cout << "Customer Budget: " << customerBudget << "$\n";
                    cout << "Customer Goes Home\n";
                    break;
                }
                else
                {
                    customerBudget -= (amount * prices[itemDice]);
                    itemsBought[itemDice] -= amount;
                }
            }
        }
        return;
    }
    void startDay()
    {
        int selector;
        cout << "Do you want to start the day?\n";
        cout << "1) Yes\n";
        cout << "2) NO\n";
        cout << "Select an option: ";
        cin >> selector;

        if(!selector || selector > 2 || selector < 1)
        {
            cout << "error, insert a number 1-2\n";
            cin.clear();
            cin.ignore(LONG_MAX, '\n');
            startDay();
        }
        switch(selector)
        {
            case 1:
                cout << "Start Day\n";
                endDay();
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
    int buyItems (int itemIn, int itemQ, double itemP)
    {
        this->itemsBought[itemIn] = itemQ;
        this->bankAccount -= itemP;
        return 0;
    }
    int sellSurplus(int itemIn, int itemQ, int moneyEarned)
    {
        this->itemsBought[itemIn] -= itemQ;
        this->bankAccount += moneyEarned;
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