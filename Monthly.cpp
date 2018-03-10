#include "Appointment.h"
#include "Monthly.h"
#include "Date.h"
#include <string>

using namespace std;

Monthly::Monthly(string description, int day, int month, int yr, int hr, int min) : Appointment (description, day, month, yr, hr, min) {
};

bool Monthly::occurs_on(int day, int month, int year) {
	Date d = getDate();
	int tday = d.getDay();
	int tmonth = d.getMonth();
	int tyear = d.getYear();

	if ((day == tday && year > tyear)||(day == tday && year == tyear && month >= tmonth))
		return true;
	else
		return false;
}


const void Monthly::print() {
	Appointment::print();
	cout<<" (Monthly)"<<endl;
}