#pragma once
#include <iostream>
class c_Human
{
private:
	char* firts_name;
	char* last_name;
	char* pasportID;
	char gender;
	int age;
	float height;
	float weight;
public:
	c_Human();
	c_Human(const char* first_name, const char* last_name, const char* pasportID, char gender, int age, float height, float weight);
};