#pragma once
#include "c_Human.h"
class c_Worker : public c_Human
{
private:
	float salary;
	int experience;
	char* place_of_work;
	char* position;
public:
	c_Worker();
	c_Worker(const char* first_name, const char* last_name, const char* pasportID, char gender, int age, float height, float weight, float salary, int experience, const char* place_of_work, const char* position);

	friend std::ostream& operator << (std::ostream& out, const c_Worker& wor);
	friend std::istream& operator >> (std::istream& in, c_Worker& wor);
};

