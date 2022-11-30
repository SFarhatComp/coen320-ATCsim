#ifndef COMPUTERSYSTEM_H
#define COMPUTERSYSTEM_H

#include <iostream>
#include <vector>
#include "Aircraft.h"

class ComputerSystem
{
	private:
		std::vector<Aircraft*>* aircraftList;
};
#endif
