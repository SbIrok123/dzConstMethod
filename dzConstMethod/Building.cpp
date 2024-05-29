#include "Building.h"

Building::Building()
{
    address = new char[10] {"Undefined"};
    flats = new Flat[20]
    {
        {3,100},
        {5,160},
        {1,80},
        {4,120},
        {2,100},
        {4,150},
        {2,100},
        {3,135.5},
        {2,110.3},
        {1,120},
        {4,113},
        {1,70},
        {2,115},
        {1,85},
        {3,120},
        {4,160},
        {2,100},
        {2,101},
        {1,12},
        {4,190},

    };
}

Building::Building(char* address)
{
    int sizeAddress = strlen(address) + 1;
    this->address = new char[sizeAddress];
    strcpy_s(this->address, sizeAddress, address);
    flats = new Flat[20]
    {
        {3,100},
        {5,160},
        {1,80},
        {4,120},
        {2,100},
        {4,150},
        {2,100},
        {3,135.5},
        {2,110.3},
        {1,120},
        {4,113},
        {1,70},
        {2,115},
        {1,85},
        {3,120},
        {4,160},
        {2,100},
        {2,101},
        {1,12},
        {4,190},

    };
}

Building::~Building()
{
    delete[]address;
    delete[]flats;
}

void Building::setAddress(char* address)
{
    int sizeAddress = strlen(address) + 1;
    this->address = new char[sizeAddress];
    strcpy_s(this->address, sizeAddress, address);
}

char* Building::getAddress() const
{
    return address;
}

void Building::addPerson(char* name, int nFlat)
{
    flats[nFlat].addResident(name);
}

void Building::delPerson(char* name, int nFlat)
{
    flats[nFlat].removeResident(name);
}

void Building::addPerson(Resident person, int nFlat)
{
    flats[nFlat].addResident(person);
}

void Building::showAllFlats() const
{
    for (int i = 0; i < 20; i++)
    {
        cout << "Квартира #" << i + 1 << "\n\tКомнат: " << flats[i].getRooms() << "\n\tКв. метров: " << flats[i].getSquare() << endl;
    }
}

void Building::showAllPersonList() const
{
    cout << "Все Жители:" << endl;
    for (int i = 0; i < 20; i++)
    {
        flats[i].showResidents();
    }
}

void Building::showPersonListByFlat(int n) const
{
    cout << "Жители квартиры номер " << n+1<<" : " << endl;
    flats[n].showResidents();

}
