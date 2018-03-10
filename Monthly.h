#ifndef MONTHLY_H
#define MONTHLY_H

//monthly class publically derived from base class appointment 

class Monthly : public Appointment {
public:
    Monthly(string description, int day, int month, int yr, int hr, int min);
    virtual bool occurs_on(int day, int month, int year);
    const virtual void print ();
};

#endif