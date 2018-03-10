#ifndef DAILY_H
#define DAILY_H

#include "Appointment.h"

class Daily : public Appointment {
public:
    Daily(string description, int day, int month, int yr, int hr, int min);
    virtual bool occurs_on(int day, int month, int year);
    const virtual void print ();
};

#endif