#include "Appointment.h"
#include <string>

Appointment::Appointment (string description, int day, int month, int yr, int hr, int min) : date (day, month, yr) {
    this->description = description;
    this->hr = hr;
    this->min = min;
}

Date Appointment::getDate() {
    return date;
}

const void Appointment::print() {
	cout<<hr<<":"<<min<<" -> "<<description;
}