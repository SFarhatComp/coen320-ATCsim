#pragma once
#include <iostream>
#include <vector>
#include "Aircraft.h"
#include <fstream>

class Data_display
{
private:
	std::vector<Aircraft*>* aircraftList;


public:
	Data_display(std::vector<Aircraft*>* list);

	void print();// This print the display with couit method and constantly update the DATA_DISPLAY.txt file


};

