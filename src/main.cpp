#include <iostream>
#include <algorithm>
#include "person.h"
#include "stringManipulator.h"

using namespace std;

void GetInputFromUser(int, Person *);
void PrintResults(int, Person *);

int main()
{
    int NumberOfEntries = 0;
    
    cout << "How many entries are there? " << endl; 
    cin >> NumberOfEntries;
    
    Person people [NumberOfEntries];
    
    GetInputFromUser(NumberOfEntries, people);
    
    PrintResults(NumberOfEntries, people);
    
    delete[] people;

    return 0;
}

void GetInputFromUser(int NumberOfEntries, Person *people)
{
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
}

void PrintResults(int NumberOfEntries, Person *people)
{
    StringManipulator *strMan = new StringManipulator();
    
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
    
    cout << endl << "Printed all uppercase, sorted alphabetically:" << endl;
    sort(people, people + NumberOfEntries);
    for (int i = 0; i < NumberOfEntries; i++)
    {
        cout << strMan->ConvertToUpper(people[i].GetName()) << endl;
    }   
}
