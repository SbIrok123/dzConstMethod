#pragma once
#include"Flat.h"
class Building
{
	char* address;
	Flat* flats;
public:
	Building();
	Building(char* address);
	~Building();

	void setAddress(char* address);
	char* getAddress()const;
	
	void addPerson(char* name, int nFlat);
	void delPerson(char* name, int nFlat);
	void addPerson(Resident person, int nFlat);


	void showAllFlats()const;
	void showAllPersonList()const;
	void showPersonListByFlat(int n) const;

};

