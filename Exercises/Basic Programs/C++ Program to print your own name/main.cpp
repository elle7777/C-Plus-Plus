// Pint your own name
// verion 0.1.0
// @Iustin Desrobitu

#include <iostream>

using namespace std;
int main()
{
    string name = "";
    string surname = "";
    cout << "Insert you name: ";
    cin >> name;
    cout << "insert your surname: ";
    cin >> surname;
    cout << "Your full name is: " + name + " " + surname << endl;
}