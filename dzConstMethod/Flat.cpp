#include "Flat.h"

Flat::Flat()
{
    rooms = 0;
    square = 0;
    arrResidents = nullptr;
    amountOfResidence = 0;
}

Flat::Flat(int rooms, float square)
{
    this->rooms = rooms;
    this->square = square;
    arrResidents = nullptr;
    amountOfResidence = 0;
}

Flat::~Flat()
{
    if(arrResidents!=nullptr)
        delete[]arrResidents;
}

Flat::Flat(const Flat& obj)
{
    amountOfResidence = obj.amountOfResidence;
    if (obj.arrResidents != nullptr) {
        arrResidents = new Resident[obj.amountOfResidence];
        for (int i = 0; i < obj.amountOfResidence; i++) {
            arrResidents[i] = obj.arrResidents[i];
        }
    }
    rooms = obj.rooms;
    square = obj.square;
}

Flat& Flat::operator=(const Flat obj)
{
    amountOfResidence = obj.amountOfResidence;
    if (obj.arrResidents != nullptr) {
        arrResidents = new Resident[obj.amountOfResidence];
        for (int i = 0; i < obj.amountOfResidence; i++) {
            arrResidents[i] = obj.arrResidents[i];
        }
    }
    rooms = obj.rooms;
    square = obj.square;
    return *this;
}

void Flat::setRooms(int rooms)
{
    this->rooms = rooms;
}

void Flat::setSquare(float square)
{
    this->square = square;
}

int Flat::getRooms() const
{
    return rooms;
}

float Flat::getSquare() const
{
    return square;
}

void Flat::addResident(char* name)
{
    Resident tmp(name);
    addItemBack(arrResidents, amountOfResidence,tmp);
}

void Flat::addResident(Resident person)
{
    Resident tmp;
    tmp.setName(person.getName());
    addItemBack(arrResidents, amountOfResidence, tmp);
}

void Flat::removeResident(char* name)
{
    for (int i = 0; i < amountOfResidence; i++)
    {
        if (strcmp(name, arrResidents[i].getName()) == 0)
        {
            removeItemByIndx(arrResidents, amountOfResidence, i);
        }
    }
}

void Flat::showResidents() const
{
    if (arrResidents != nullptr) {
        for (int i = 0; i < amountOfResidence; i++)
        {
            cout << "\t" << arrResidents[i].getName() << endl;
        }
    }
}
