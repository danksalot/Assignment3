#ifndef FUNCTIONS_H
#define FUNCTIONS_H

struct Person
{
    std::string FirstName;
    std::string LastName;
    std::string DateOfBirth;
};

Person * GetPersonFromInput(int personId);
bool PersonIsValid(Person * person);
std::string GetPersonDetails(Person * person);
std::string GetPersonDetailsLower(Person * person);
std::string GetPersonDetailsUpper(Person * person);

#endif
