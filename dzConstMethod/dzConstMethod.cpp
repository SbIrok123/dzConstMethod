#include <iostream>
#include"Resident.h"
#include"Flat.h"
#include"Building.h"
int main()
{
	setlocale(LC_ALL, "");
	char* address = new char[17] {"Сумська 9"};
	Building a(address);
	char* Oleh = new char[5] {"Oleh"};
	a.addPerson(Oleh,0);
	char* Anatoliy = new char[9] {"Anatoliy"};
	a.addPerson(Anatoliy,3);
	char* Anton = new char[6] {"Anton"};
	a.addPerson(Anton,19);
	a.addPerson(Oleh, 13);
	a.addPerson(Anton, 12);
	a.addPerson(Anton, 12);

	a.showAllFlats();
	cout << "---------------------------------------------" << endl;
	a.showPersonListByFlat(12);
	cout << "---------------------------------------------" << endl;
	a.showAllPersonList();
	cout << "---------------------------------------------" << endl;
	
}
