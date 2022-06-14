#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person
{
	private:
		int age;
		string name;
	public:
		Person();
		Person(int my_age, string my_name);
		void SetAge(int age);
		void SetName(string name);
		int GetAge() const;
		virtual string GetName() const;
};
#include "Person.cpp"
#endif
