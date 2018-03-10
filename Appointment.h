#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include "Date.h"
#include <iostream>

class Appointment {
private:
    Date date;				//stores date in three variables (day,month,year)
    string description;
    int hr;
    int min;
public:
    Date getDate ();
    virtual bool occurs_on(int day, int month, int year) = 0;		//pure virtual function
    const virtual void print ();									//virtual function for printing
    Appointment(string description, int day, int month, int yr, int hr, int min);		//constructor
};

#endif