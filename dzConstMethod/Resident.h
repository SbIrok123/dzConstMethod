#pragma once
#include<cstring>
using namespace std;
class Resident
{
	char* name;
public:
	Resident();
	Resident(const char* name);
	Resident(const Resident& obj);
	Resident& operator=(const Resident obj);
	~Resident();

	void setName(const char* name);
	char* getName()const;

};

