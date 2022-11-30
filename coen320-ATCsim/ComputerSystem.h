#ifndef COMPUTERSYSTEM_H
#define COMPUTERSYSTEM_H

#include <iostream>
#include <vector>
#include "Aircraft.h"



/*Computer System: It is responsible for periodic computations to determine if there is any
violation of the airspace separation constraint. It is also responsible for the alert/notification of
such event to the operator. This component determines if there is (or will be) a safety violation
and emit an alert to notify the operator. Moreover, it will send to the Data Display the ID and
position of the aircraft to be shown on the screen of the controller*/


class ComputerSystem
{
	private:
		std::vector<Aircraft*>* aircraftList;
		int Current_time;
		int N;
		//int anticipatedx;
		//int anticipatedy;
		//int anticipatedz;
		

	public:

		ComputerSystem(std::vector <Aircraft*>*, int t, int n);
		void setCurrent_time(int );
		int getCurrent_time();
		void setN(int );
		int GetN();
		void setAnticipatedPosition(int n , int currenttime);
		bool AnticipatedHit(); // ask pranavaa, we might need to set an anticipated hit variable in the airplane class which is initialised to false; because we need to constantly update it ,   It is responsible for periodic computations to determine if there is any
		//violation of the airspace separation constraint.
		void EmitAler(); // emit an alert to notify the operator
		void SendDatatoDisplay(); // No idea what to do , send to the Data Display the ID and



};
#endif
