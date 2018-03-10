#ifndef ONETIME_H
#define ONETIME_H

#include "Appointment.h"
#include <string>

class OneTime : public Appointment {
public:
    OneTime(string description, int day, int month, int yr, int hr, int min);
	virtual bool occurs_on(int day, int month, int year);
    const virtual void print ();
};

#endif