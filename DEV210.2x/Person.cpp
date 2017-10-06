#include "stdafx.h"
#include "Person.h"

Person::Person()
{
}

Person::Person(std::string name, int age, int weight, int height)
{
	this->name = name;
	this->age = age;
	this->weight = weight;
	this->height = height;
}
