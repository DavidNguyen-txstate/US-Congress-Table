#include "Senator.h"
#include <string>

Senator::Senator() {
	senator_party = "";
	senator_start_date = "";
	senator_retired_date = "";
	senator_state = "";
}

Senator::Senator(int my_age, string my_name, string my_senator_party, 
string my_senator_start_date, string my_senator_retired_date, 
string my_senator_state) : Person(my_age, my_name)
{
	senator_party = my_senator_party;
	senator_start_date = my_senator_start_date;
	senator_retired_date = my_senator_retired_date;
	senator_state = my_senator_state;
}

void Senator::SetSenatorAge(int age) {
	Person::SetAge(age);
}

void Senator::SetSenatorName(string name) {
	Person::SetName(name);
}

void Senator::SetSenatorParty(string senator_party) {
	this->senator_party = senator_party;
}

void Senator::SetSenatorStartDate(string senator_start_date) {
	this->senator_start_date = senator_start_date;
}

void Senator::SetSenatorRetiredDate(string senator_retired_date) {
	this->senator_retired_date = senator_retired_date;
}

void Senator::SetSenatorState(string senator_state) {
	this->senator_state = senator_state;
}

int Senator::GetSenatorAge() const {
	return Person::GetAge();
}

string Senator::GetName() const {
	return "Senator " + Person::GetName();
}

string Senator::GetSenatorParty() const {
	return senator_party;
}

string Senator::GetSenatorStartDate() const {
	return senator_start_date;
}

string Senator::GetSenatorRetiredDate() const {
	return senator_retired_date;
}

string Senator::GetSenatorState() const {
	return senator_state;
}
