#include <iostream>
#include <algorithm>
#include "functions.h"

using namespace std;

bool Person::IsValid()
{
    return FirstName.size() < 10 && LastName.size() < 10 && DateOfBirth.size() == 10;
}

string Person::GetDetails()
{
    return FirstName + " " + LastName + " " + DateOfBirth;
}

string StringManipulator::ConvertToUpper(string input)
{
    transform(input.begin(), input.end(), input.begin(), ::toupper);
    return input;
}

string StringManipulator::ConvertToLower(string input)
{
    transform(input.begin(), input.end(), input.begin(), ::tolower);
    return input;
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
