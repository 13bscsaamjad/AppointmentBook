#ifndef YEARLY_H
#define YEARLY_H

#include<string>
#include "Appointment.h"
using namespace std;

class Yearly : public Appointment {
public:
    Yearly(string description, int day, int month, int yr, int hr, int min);
    virtual bool occurs_on(int day, int month, int year);
    const virtual void print ();
};

#endif
