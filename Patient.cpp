#include "Patient.h"
#include <string>
#include "Hospital.h"



Patient::Patient( const std::string& name, int age, const std::string& disease, const std::vector<std::string>& deseaseHistory) :  _name(name), _age(age), _desease(disease), _deseaseHistory(deseaseHistory) {}


const std::string& Patient::getName()
{
    return _name;
}

void Patient::setName(std::string& name)
{
    _name = name;
}

int Patient::getAge()
{
    return _age;
}

void Patient::setAge(int age)
{
    _age = age;
}

std::string& Patient::getDesease()
{
    return _desease;
}

void Patient::setDesease(std::string& desease)
{
    _desease = desease;
}
