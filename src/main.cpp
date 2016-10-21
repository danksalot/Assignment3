#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    StringManipulator *strMan = new StringManipulator();
    int NumberOfEntries = 0;
    cout << "How many entries are there? " << endl; 
    cin >> NumberOfEntries;
    
    Person people [NumberOfEntries];
    
    for (int i = 1; i <= NumberOfEntries; i++)
    {
        Person *person = GetPersonFromInput(i);
        if (person->IsValid())
        {
            people[i-1] = *person;
            cout << "Saved Person: " << person->GetDetails() << endl << endl;
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
        cout << people[i].GetDetails() << endl;
    }
    
    cout << endl << "Printed all lowercase:" << endl;
    for (int i = 0; i < NumberOfEntries; i++)
    {
        cout << strMan->ConvertToLower(people[i].GetDetails()) << endl;
    }
    
    cout << endl << "Printed all uppercase:" << endl;
    for (int i = 0; i < NumberOfEntries; i++)
    {
        cout << strMan->ConvertToUpper(people[i].GetDetails()) << endl;
    }

    return 0;
}
