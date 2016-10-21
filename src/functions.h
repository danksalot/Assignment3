#ifndef FUNCTIONS_H
#define FUNCTIONS_H

class Person
{
    std::string FirstName;
    std::string LastName;
    std::string DateOfBirth;
    
    bool IsValid();
    bool GetDetails();
};

Person * GetPersonFromInput(int personId);
bool PersonIsValid(Person * person);
std::string GetPersonDetails(Person * person);
std::string GetPersonDetailsLower(Person * person);
std::string GetPersonDetailsUpper(Person * person);

#endif
