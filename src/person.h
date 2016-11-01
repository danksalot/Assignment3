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
    bool operator<(const Person& p) { return this->LastName < p.LastName || (this->LastName == p.LastName && this->FirstName < p.FirstName); }
    bool Sort(Person, Person);
};

Person * GetPersonFromInput(int personId);

#endif
