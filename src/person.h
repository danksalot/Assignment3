#ifndef FUNCTIONS_H
#define FUNCTIONS_H

class Person
{
    public:
    std::string FirstName;
    std::string LastName;
    std::string DateOfBirth;
    
    bool IsValid();
    std::string GetDetails();
};

Person * GetPersonFromInput(int personId);

#endif
