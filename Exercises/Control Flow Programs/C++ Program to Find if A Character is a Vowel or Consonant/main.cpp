// Voel or Consonant
// version 0.1.0
// @Iustin Desrobitu

#include <iostream>
#include <algorithm>

using namespace std;

bool letterFinder(char letter)
{
    string vowel = "aeiouAEIOU";
    auto index = find(vowel.begin(), vowel.end(), letter);
    if(index != vowel.end())
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
    char letter;
    cout << "This Program finds out if your letter is a Vowel or a Consonant" << endl;
    cout << "Insert a letter: ";
    cin >> letter;

    if(letterFinder(letter) == true)
    {
        cout << "The letter is a Vowel" << endl;
    }
    else
    {
        cout << "The letter is a consonant" << endl;
    }
    
    return 0;
}