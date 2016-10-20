#include <iostream>
#include <algorithm>
#include "functions.h"

using namespace std;

Person * GetPersonFromInput(int personId)
{
    Person *person = new Person();
    cout << "Enter the first name of Person " << personId << " ";
    cin >> person->FirstName;
    cout << "Enter the last name of Person " << personId << " ";
    cin >> person->LastName;
    cout << "Enter the first name of Person " << personId << " ";
    cin >> person->DateOfBirth;
    
    return person;
}

bool PersonIsValid(Person * person)
{
    return person->FirstName.size() < 10 && person->LastName.size() < 10 && person->DateOfBirth.size() == 10;
}

string GetPersonDetails(Person * person)
{
    return person->FirstName + " " + person->LastName + " " + person->DateOfBirth;
}
string GetPersonDetailsLower(Person * person)
{
    string details = GetPersonDetails(person);
    transform(details.begin(), details.end(), details.begin(), ::tolower);
    
    return details;
}

string GetPersonDetailsUpper(Person * person)
{
    string details = GetPersonDetails(person);
    transform(details.begin(), details.end(), details.begin(), ::toupper);
    
    return details;
}
