#pragma once
#include"Resident.h"
#include"ArrayTemplate.h"
class Flat
{
	int rooms;
	float square;
	int amountOfResidence;
	Resident* arrResidents;

public:
	Flat();
	Flat(int rooms,float square);
	~Flat();
	Flat(const Flat& obj);
	Flat& operator=(const Flat obj);

	void setRooms(int rooms);
	void setSquare(float square);
	int getRooms()const;
	float getSquare()const;

	void addResident(char* name);
	void addResident(Resident person);
	void removeResident(char* name);
	void showResidents() const;
};

