#include <iostream>
#include "person.h"

using namespace std;

bool Person::IsValid()
{
    return FirstName.size() < 10 && LastName.size() < 10 && DateOfBirth.size() == 10;
}

string Person::GetDetails()
{
    return FirstName + " " + LastName + " " + DateOfBirth;
}

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
