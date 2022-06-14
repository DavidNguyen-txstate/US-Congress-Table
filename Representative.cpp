#include "Representative.h"
#include <string>

Representative::Representative() {
	representative_party = "";
	representative_start_date = "";
	representative_retired_date = "";
	representative_state = "";
}

Representative::Representative(int my_age, string my_name, string my_representative_party, 
string my_representative_start_date, string my_representative_retired_date, 
string my_representative_state) : Person(my_age, my_name)
{
	representative_party = my_representative_party;
	representative_start_date = my_representative_start_date;
	representative_retired_date = my_representative_retired_date;
	representative_state = my_representative_state;
}

void Representative::SetRepresentativeAge(int age) {
	Person::SetAge(age);
}

void Representative::SetRepresentativeName(string name) {
	Person::SetName(name);
}

void Representative::SetRepresentativeParty(string representative_party) {
	this->representative_party = representative_party;
}

void Representative::SetRepresentativeStartDate(string representative_start_date) {
	this->representative_start_date = representative_start_date;
}

void Representative::SetRepresentativeRetiredDate(string representative_retired_date) {
	this->representative_retired_date = representative_retired_date;
}

void Representative::SetRepresentativeState(string representative_state) {
	this->representative_state = representative_state;
}

int Representative::GetRepresentativeAge() const {
	return Person::GetAge();
}

string Representative::GetName() const {
	return "Representative " + Person::GetName();
}

string Representative::GetRepresentativeParty() const {
	return representative_party;
}

string Representative::GetRepresentativeStartDate() const {
	return representative_start_date;
}

string Representative::GetRepresentativeRetiredDate() const {
	return representative_retired_date;
}

string Representative::GetRepresentativeState() const {
	return representative_state;
}
