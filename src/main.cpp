#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    int NumberOfEntries = 0;
    cout << "How many entries are there? " << endl; 
    cin >> NumberOfEntries;
    
    for (int i = 1; i <= NumberOfEntries; i++)
    {
        Person *person = GetPersonFromInput(i);
        if (PersonIsValid(person))
        {
            cout << "Saved Person: " << GetPersonDetails(person) << endl;
            cout << "Saved Person: " << GetPersonDetailsLower(person) << endl;
            cout << "Saved Person: " << GetPersonDetailsUpper(person) << endl << endl;
        }
        else
        {
            cout << "Unable to save Person " << i << ".  Invalid input." << endl;
        }
    }

    return 0;
}