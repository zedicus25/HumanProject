#include "c_Student.h"

c_Student::c_Student() : c_Human()
{
	this->university = new char[0];
	this->group = new char[0];
	this->budget = true;
}

c_Student::c_Student(const char* first_name, const char* last_name, const char* pasportID, char gender, int age, float height, float weight, const char* university, const char* group, bool budget) : c_Human(firts_name, last_name, pasportID,gender,age,height,weight)
{
	this->university = new char[strlen(university) + 1];
	strcpy_s(this->university, strlen(university) + 1, university);

	this->group = new char[strlen(group) + 1];
	strcpy_s(this->group, strlen(group) + 1, group);

	this->budget = budget;
}

std::ostream& operator<<(std::ostream& out, const c_Student& st)
{
	out << "Student: ";
	out << st.firts_name << "\t" << st.last_name << "\t" << st.gender << "\t" << st.height <<
		"\t" << st.weight << "\t" << st.age << "\t" << st.pasportID << "\n";
	out << st.university << "\t" << st.group << "\t" << st.budget << "\n";
	return out;
}

std::istream& operator>>(std::istream& in, c_Student& st)
{
	std::cout << "Name: ";
	in >> st.firts_name;
	std::cout << "Last name: ";
	in >> st.last_name;
	std::cout << "Gender(f\m): ";
	in >> st.gender;
	std::cout << "Pasport ID: ";
	in >> st.pasportID;
	std::cout << "Age: ";
	in >> st.age;
	std::cout << "Height: ";
	in >> st.height;
	std::cout << "Weight: ";
	in >> st.weight;
	std::cout << "University: ";
	in >> st.university;
	std::cout << "Group: ";
	in >> st.group;
	std::cout << "Budget: ";
	in >> st.budget;
	return in;
}
