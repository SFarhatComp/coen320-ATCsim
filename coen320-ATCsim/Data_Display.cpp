#include "Data_Display.h"

Data_display::Data_display(std::vector<Aircraft*>* aircraftList)
{

	this->aircraftList = aircraftList;
}

void Data_display::print()
{


	std::ofstream myfile;
	myfile.open("LogOfDataDisplay.txt");


	
	std::cout << "********The Following Data is the Data Display that display the current view of the space every 5 seconds********** " << std::endl; 
	for (int i = 0; i < aircraftList->size(); i++) {
		Aircraft* tempAircraft = aircraftList->at(i);
		std::cout << " The current position for Aircraft : " << tempAircraft->getID() << "is (" << tempAircraft->getXPosition() << ", " << tempAircraft->getYPosition() << ", " << tempAircraft->getZPosition() << std::endl;

		// The rest of this code is an prototype to write this log history in a file 


		myfile <<" The current position for Aircraft : " << tempAircraft->getID() << "is (" << tempAircraft->getXPosition() << ", " << tempAircraft->getYPosition() << ", " << tempAircraft->getZPosition()<< "\n";
	
	}


	std::cout << "******************************END OF THE DATA DISPLAY SEQUENCE **********************************" << endl; 
	myfile.close();

	// We calll this print Function every 5 Second ( to be implemented with the threads ) 


}
