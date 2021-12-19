#pragma once
#include "c_Human.h"
class c_SchoolBoy : public c_Human
{
private:
	float avarageScore;
	char* clas;
	char* school;
public:
	c_SchoolBoy();
	c_SchoolBoy(const char* first_name, const char* last_name, const char* pasportID, char gender, int age, float height, float weight, float avatrageScore, const char* clas, const char* school);
	
	friend std::ostream& operator << (std::ostream& out, const c_SchoolBoy& sch);
	friend std::istream& operator >> (std::istream& in, c_SchoolBoy& sch);

	~c_SchoolBoy() 
	{
		this->firts_name = nullptr;
		this->last_name = nullptr;
		this->pasportID = nullptr;
		this->clas = nullptr;
		this->school = nullptr;
	}
};

