#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include "Appointment.h"
#include "OneTime.h"
#include "Daily.h"
#include "Monthly.h"
#include "Yearly.h"

using namespace std;

void checkAppointments(vector<Appointment*>& apptbook){
    int day;
    int month;
    int year;
    cout << "Enter date (dd mm yyyy): ";
    cin >> day >> month >> year;
    cout << "Appointments on "<<day<<"/"<<month<<"/"<<year<<":"<<endl;
	for (int i = 0; i < apptbook.size(); i ++) {
		if(apptbook[i]->occurs_on(day, month, year)) {
			apptbook[i]->print();
		}
	}
}

void addAppointment(vector<Appointment*>& apptbook) {
    string description;
    int day;
    int month;
    int year;
    int hr;
    int min;  
    int appttype;

    cout << "Enter date and time (dd mm yyyy hr min): ";
    cin >> day >> month >> year >> hr >> min;
    cout << "Enter description:"<<endl;
    getchar();
    getline (cin,description);
    cout << "Enter appointment type: (1) for one-time, (2) for daily, (3) for monthly, (4) for yearly: ";
    cin >> appttype;
	
	if (appttype == 1) {
        OneTime* otime = new OneTime(description, day, month, year, hr, min);
        apptbook.push_back((Appointment*)otime);
	}
    if (appttype == 2) {
        Daily* daily = new Daily (description, day, month, year, hr, min);
        apptbook.push_back((Appointment*)daily);
	}
    if (appttype == 3) {
        Monthly* monthly = new Monthly (description, day, month, year, hr, min);
        apptbook.push_back((Appointment*)monthly);
	}
    if (appttype == 4) {
        Yearly* yearly = new Yearly (description, day, month, year, hr, min);
        apptbook.push_back((Appointment*)yearly);
    }
}
 

int main(){

  vector<Appointment*> apptbook;		//vector to store upcasted derived objects
 
  char option;

  do {
     cout << "********** Appointment Book Application ************" << endl<< endl;
     cout << "(a) See all appointments on a given day." << endl;
     cout << "(b) Add an appointment." << endl << endl;
     cout << "Enter an option or 'q' to quit: ";
 
     cin >> option;
     switch(option){
        case 'a':
            checkAppointments(apptbook);
            break;
        case 'b':
            addAppointment(apptbook);
             break;
        case 'q':
             break;
        default:
            cout << "You entered an invalid option.  Try again!";  
     }
     cout << endl;
  }
  while(option != 'q');

  // Cleaning up

  for(int i = 0; i < apptbook.size(); i++){
    delete apptbook[i];
  }
  apptbook.clear();

 
  return 0;
}
