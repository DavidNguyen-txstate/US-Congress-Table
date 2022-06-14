#ifndef REPRESENTATIVE_H
#define REPRESENTATIVE_H
#include <string>
#include "Person.h"
using namespace std;

class Representative : public Person {
	private:
		string representative_party;
		string representative_start_date;
		string representative_retired_date;
		string representative_state;
	public:
		Representative();
		Representative(int my_age, string my_name, string my_representative_party, string my_representative_start_date, 
		               string my_representative_retired_date, string my_representative_state);
		void SetRepresentativeAge(int age);
		void SetRepresentativeName(string name);
		void SetRepresentativeParty(string representative_party);
		void SetRepresentativeStartDate(string representative_start_date);
		void SetRepresentativeRetiredDate(string representative_retired_date);
		void SetRepresentativeState(string representative_state);
		int GetRepresentativeAge() const;
		virtual string GetName() const override;
		string GetRepresentativeParty() const;
		string GetRepresentativeStartDate() const;
		string GetRepresentativeRetiredDate() const;
		string GetRepresentativeState() const;
};
#include "Representative.cpp"
#endif
