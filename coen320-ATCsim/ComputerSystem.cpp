#include "ComputerSystem.h"

ComputerSystem::ComputerSystem(std::vector <Aircraft*>* aircraftList, int N , int Current_time)
{
	this->aircraftList = aircraftList;


	this->N = N;
	this->Current_time = Current_time; 


	//anticipatedx=0;
	//anticipatedy = 0;
	//anticipatedz = 0;
	
}

void ComputerSystem::setCurrent_time(int Current_time) 
{
	this -> Current_time = Current_time;

}

int ComputerSystem::getCurrent_time()
{
	return this->Current_time;
}

void ComputerSystem::setN(int N )
{

	this->N = N;
}

int ComputerSystem::GetN()
{
	return this->N;
}




void ComputerSystem::setAnticipatedPosition(int n, int Current_time)
{
	for (int i = 0; i < aircraftList->size(); i++) {
		Aircraft* tempAircraft = aircraftList->at(i);
		tempAircraft->setAnticipatedx(tempAircraft->getXPosition() + ((n + Current_time) * tempAircraft->getXSpeed()));
		tempAircraft->setAnticipatedy(tempAircraft->getYPosition() + ((n + Current_time) * tempAircraft->getYSpeed()));
		tempAircraft->setAnticipatedz(tempAircraft->getZPosition() + ((n + Current_time) * tempAircraft->getZSpeed()));

	}


}

bool ComputerSystem::AnticipatedHit()
{

	double XDistance=3000;
	double YDistance=3000;
	double ZDistance=1000;
	for (int i = 0; i < (aircraftList->size())-1; i++) {

		for (int j = 1; j < aircraftList->size(); j++) {
		
			Aircraft* tempAircraft = aircraftList->at(i);
			Aircraft* tempInvadingAircraft = aircraftList->at(j);
			
			if ((abs(tempAircraft->getXPosition() - tempInvadingAircraft->getXPosition())<=XDistance && abs(tempAircraft->getYPosition() - tempInvadingAircraft->getYPosition()) <= YDistance && abs(tempAircraft->getZPosition() - tempInvadingAircraft->getZPosition()) <= ZDistance) 
				
				||( abs(tempAircraft->getXPosition() - tempInvadingAircraft->getAnticipatedx()) <= XDistance && abs(tempAircraft->getYPosition() - tempInvadingAircraft->getAnticipatedy()) <= YDistance && abs(tempAircraft->getZPosition() - tempInvadingAircraft->getAnticipatedz()) <= ZDistance))
			
			
			{

				// we also need to retrun the ids of the air craft that would occur a hit , 
				return true;
			}

			else {

				return false;
			}


			// THIS CODE WILL VERIFIY FOR FIRST PLANE then look for all other planes in accordance to that one , and if there is a collision with current status of both planes or the current status of the current plane and expected trajectories of new plane, return TRUE ; 
			// else, return false 

			/// XDISTANCE , Y DISTANCE and Z DISTANCE HAVE BEEN TAKEN FROM THE ASSIGNEMENT DOCUMENTATION AT PAGE 4
		
		
		}
		
	}



	
	
}

void ComputerSystem::EmitAler()
{




	if (AnticipatedHit()) {



		// if anticipated hit hits true, we need to send an alert to the proper part of the project
		std::cout << " ALERT " << std::endl;

		// Replace the Alert with a signal that is sent to the 
	}

	else {
		

		// else , do nothing , the current trajectory of every plane is correct 

		std::cout << "NO ALERT" << std::endl;
	};
}
