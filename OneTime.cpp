#include "OneTime.h"
#include "Appointment.h"

OneTime::OneTime(string description, int day, int month, int yr, int hr, int min) : Appointment (description, day, month, yr, hr, min) {
};

bool OneTime::occurs_on(int day, int month, int year) {
	Date d = getDate();
	int tday = d.getDay();
	int tmonth = d.getMonth();
	int tyear = d.getYear();
	
	if (day == tday && month == tmonth && year == tyear)
		return true;
	else
		return false;
}

const void OneTime::print() {
	Appointment::print();
	cout<<" (One Time)"<<endl;
}