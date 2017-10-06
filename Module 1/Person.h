#include <iostream>

class Person {

public:
	std::string name;
	int age;
	int weight;
	int height;

	Person();
	Person(std::string name, int age, int weight, int height);
};