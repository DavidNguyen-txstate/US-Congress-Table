#ifndef SENATOR_H
#define SENATOR_H
#include <string>
#include "Person.h"
using namespace std;

class Senator : public Person {
	private:
		string senator_party;
		string senator_start_date;
		string senator_retired_date;
		string senator_state;
	public:
		Senator();
		Senator(int my_age, string my_name, string my_senator_party, string my_senator_start_date, 
		        string my_senator_retired_date, string my_senator_state);
		void SetSenatorAge(int age);
		void SetSenatorName(string name);
		void SetSenatorParty(string senator_party);
		void SetSenatorStartDate(string senator_start_date);
		void SetSenatorRetiredDate(string senator_retired_date);
		void SetSenatorState(string senator_state);
		int GetSenatorAge() const;
		virtual string GetName() const override;
		string GetSenatorParty() const;
		string GetSenatorStartDate() const;
		string GetSenatorRetiredDate() const;
		string GetSenatorState() const;
};
#include "Senator.cpp"
#endif
