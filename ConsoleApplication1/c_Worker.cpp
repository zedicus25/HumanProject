#include "c_Worker.h"

c_Worker::c_Worker() : c_Human()
{
	this->salary = 0;
	this->experience = 0;
	this->place_of_work = new char[0];
	this->position = new char[0];
}

c_Worker::c_Worker(const char* first_name, const char* last_name, const char* pasportID, char gender, int age, float height, float weight, float salary, int experience, const char* place_of_work, const char* position) : c_Human(first_name, last_name, pasportID, gender, age, height, weight)
{
	this->salary = salary;
	this->experience = experience;
	this->place_of_work = new char[strlen(place_of_work) + 1];
	strcpy_s(this->place_of_work, strlen(place_of_work) + 1, place_of_work);
	this->position = new char[strlen(position) + 1];
	strcpy_s(this->position, strlen(position) + 1, position);
}

std::ostream& operator<<(std::ostream& out, const c_Worker& wor)
{
	out << "Worker: ";
	out << wor.firts_name << "\t" << wor.last_name << "\t" << wor.gender << "\t" << wor.height <<
		"\t" << wor.weight << "\t" << wor.age << "\t" << wor.pasportID << "\n";
	out << wor.place_of_work << "\t" << wor.position << "\t" << wor.experience << "\t" << wor.salary << "\n";
	return out;
}

std::istream& operator>>(std::istream& in, c_Worker& wor)
{
	std::cout << "Name: ";
	in >> wor.firts_name;
	std::cout << "Last name: ";
	in >> wor.last_name;
	std::cout << "Gender(f\m): ";
	in >> wor.gender;
	std::cout << "Pasport ID: ";
	in >> wor.pasportID;
	std::cout << "Age: ";
	in >> wor.age;
	std::cout << "Height: ";
	in >> wor.height;
	std::cout << "Weight: ";
	in >> wor.weight;
	std::cout << "Place of work: ";
	in >> wor.place_of_work;
	std::cout << "Position: ";
	in >> wor.position;
	std::cout << "Salary: ";
	in >> wor.salary;
	std::cout << "Experince: ";
	in >> wor.salary;
	return in;
}
