#include "Person.h"
#include <string>

Person::Person() {
	age = 0;
	name = "";
}

Person::Person(int my_age, string my_name) {
	age = my_age;
	name = my_name;
}

void Person::SetAge(int age) {
	this->age = age;
}

void Person::SetName(string name) {
	this->name = name;
}

int Person::GetAge() const {
	return age;
}

string Person::GetName() const {
	return name;
}
