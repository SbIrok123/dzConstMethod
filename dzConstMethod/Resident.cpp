#include "Resident.h"

Resident::Resident()
{
    name = new char[10] {"Undefined"};
}

Resident::Resident(const char* name)
{
    int sizeName = strlen(name)+1;
    this->name = new char[sizeName];
    strcpy_s(this->name,sizeName, name);
}

Resident::Resident(const Resident& obj)
{
    int sizeName = strlen(obj.getName())+1;
    this->name = new char[sizeName];
    strcpy_s(this->name, sizeName, obj.getName());
}

Resident& Resident::operator=(const Resident obj)
{
    delete[] this->name;
    int sizeName = strlen(obj.getName()) + 1;
    this->name = new char[sizeName];
    strcpy_s(this->name, sizeName, obj.getName());
    return *this;
}

Resident::~Resident()
{
    delete[] name;
}

void Resident::setName(const char* name)
{
    int sizeName = strlen(name) + 1;
    this->name = new char[sizeName];
    strcpy_s(this->name, sizeName, name);
}

char* Resident::getName() const
{
    return name;
}
