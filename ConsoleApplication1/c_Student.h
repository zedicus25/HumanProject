#pragma once
#include "c_Human.h"
class c_Student : public c_Human
{
private:
	char* university;
	char* group;
	bool budget;
public:
	c_Student();
	c_Student(const char* first_name, const char* last_name, const char* pasportID, char gender, int age, float height, float weight, const char* university, const char* group, bool budget);

	friend std::ostream& operator << (std::ostream& out, const c_Student& st);
	friend std::istream& operator >> (std::istream& in,  c_Student& st);

	~c_Student()
	{
		this->firts_name = nullptr;
		this->last_name = nullptr;
		this->pasportID = nullptr;
		this->group = nullptr;
		this->university = nullptr;
	}
};

