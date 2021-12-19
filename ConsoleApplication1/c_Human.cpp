#include "c_Human.h"
#include <iostream>
c_Human::c_Human()
{
	this->firts_name = new char[0];
	this->last_name = new char[0];
	this->pasportID = new char[0];
	this->gender = '  ';
	this->age = 0;
	this->weight = 0;
	this->height = 0;
}

c_Human::c_Human(const char* first_name, const char* last_name, const char* pasportID, char gender, int age, float height, float weight)
{
	this->firts_name = new char[strlen(first_name) + 1];
	strcpy_s(this->firts_name, strlen(first_name) + 1, first_name);

	this->last_name = new char[strlen(last_name) + 1];
	strcpy_s(this->last_name, strlen(last_name) + 1, last_name);

	this->pasportID = new char[strlen(pasportID) + 1];
	strcpy_s(this->pasportID, strlen(pasportID) + 1, pasportID);

	if (gender != 'F' || gender != 'M' || gender != 'f' || gender != 'm') {
		std::cout << "There are only two genders!\n";
		this->gender = 'M';
	}
	else {
		this->gender = gender;
	}

	this->age = age;
	this->weight = weight;
	this->height = height;
}

std::ostream& operator<<(std::ostream& out, const c_Human& hum)
{

	return out;
}
