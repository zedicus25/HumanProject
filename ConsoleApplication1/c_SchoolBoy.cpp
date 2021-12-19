#include "c_SchoolBoy.h"

c_SchoolBoy::c_SchoolBoy() : c_Human()
{
	this->avarageScore = 0;
	this->clas = new char[0];
	this->school = new char[0];
}

c_SchoolBoy::c_SchoolBoy(const char* first_name, const char* last_name, const char* pasportID, char gender, int age, float height, float weight,float avatrageScore, const char* clas, const char* school) : c_Human(first_name,last_name, pasportID, gender, age,height,weight){
	this->avarageScore = avarageScore;
	this->clas = new char[strlen(clas) + 1];
	strcpy_s(this->clas, strlen(clas) + 1, clas);
	this->school = new char[strlen(school) + 1];
	strcpy_s(this->school, strlen(school) + 1, school);
}

std::ostream& operator<<(std::ostream& out, const c_SchoolBoy& sch)
{
	out << "Schoolboy: ";
	out << sch.firts_name << "\t" << sch.last_name << "\t" << sch.gender << "\t" << sch.height <<
		"\t" << sch.weight << "\t" << sch.age << "\t" << sch.pasportID << "\n";
	out << sch.school << "\t" << sch.clas << "\t" << sch.avarageScore << "\n";
	return out;
}

std::istream& operator>>(std::istream& in, c_SchoolBoy& sch)
{
	std::cout << "Name: ";
	in >> sch.firts_name;
	std::cout << "Last name: ";
	in >> sch.last_name;
	std::cout << "Gender(f\m): ";
	in >> sch.gender;
	std::cout << "Pasport ID: ";
	in >> sch.pasportID;
	std::cout << "Age: ";
	in >> sch.age;
	std::cout << "Height: ";
	in >> sch.height;
	std::cout << "Weight: ";
	in >> sch.weight;
	std::cout << "School: ";
	in >> sch.school;
	std::cout << "Class: ";
	in >> sch.clas;
	std::cout << "Avarage score: ";
	in >> sch.avarageScore;
	return in;
}
