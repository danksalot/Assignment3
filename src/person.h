#ifndef PERSON_H
#define PERSON_H

class Person
{
    public:
    std::string FirstName;
    std::string LastName;
    std::string DateOfBirth;
    
    bool IsValid();
    std::string GetName();
    std::string GetDetails();
    friend bool operator<(const Person&, const Person&);
};

Person * GetPersonFromInput(int personId);

#endif
