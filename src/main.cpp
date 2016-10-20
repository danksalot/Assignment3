#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    int NumberOfEntries = 0;
    cout << "How many entries are there? " << endl; 
    cin >> NumberOfEntries;
    
    Person people [NumberOfEntries];
    
    for (int i = 1; i <= NumberOfEntries; i++)
    {
        Person *person = GetPersonFromInput(i);
        if (PersonIsValid(person))
        {
            people[i-1] = *person;
            cout << "Saved Person: " << GetPersonDetails(person) << endl << endl;
        }
        else
        {
            cout << "Unable to save Person " << i << " due to invalid input.  Please try again." << endl << endl;
            i--;
        }
    }
    
    cout << "Saved People:" << endl;
    for (int i = 0; i < NumberOfEntries; i++)
    {
        cout << GetPersonDetails(&people[i]) << endl;
    }
    
    cout << endl << "Printed all lowercase:" << endl;
    for (int i = 0; i < NumberOfEntries; i++)
    {
        cout << GetPersonDetailsLower(&people[i]) << endl;
    }
    
    cout << endl << "Printed all uppercase:" << endl;
    for (int i = 0; i < NumberOfEntries; i++)
    {
        cout << GetPersonDetailsUpper(&people[i]) << endl;
    }

    return 0;
}
