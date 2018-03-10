#include "Daily.h"
#include <string>

using namespace std;

Daily::Daily(string description, int day, int month, int yr, int hr, int min) : Appointment (description, day, month, yr, hr, min) {
};

bool Daily::occurs_on(int day, int month, int year) {
	Date d = getDate();
	int tday = d.getDay();
	int tmonth = d.getMonth();
	int tyear = d.getYear();
	
	if ((year > tyear)||(year == tyear && month > tmonth)||(year == tyear && month == tmonth && day >= tday))
		return true;
	else
		return false;
}

const void Daily::print() {
	Appointment::print();
	cout<<" (Daily)"<<endl;
}