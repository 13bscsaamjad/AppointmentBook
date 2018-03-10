#include "Yearly.h"
#include "Date.h"

Yearly::Yearly(string description, int day, int month, int yr, int hr, int min) : Appointment (description, day, month, yr, hr, min) {
};

bool Yearly::occurs_on(int day, int month, int year) {
	Date d = getDate();
	int tday = d.getDay();
	int tmonth = d.getMonth();
	int tyear = d.getYear();

	if (day == tday && month == tmonth && year >= tyear)
		return true;
	else
		return false;
}

const void Yearly::print() {
	Appointment::print();
	cout<<" (Yearly)"<<endl;
}