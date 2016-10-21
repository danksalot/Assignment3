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

class StringManipulator
{
    public:
    std::string ConvertToUpper(std::string input);
    std::string ConvertToLower(std::string input);
};

Person * GetPersonFromInput(int personId);

#endif
