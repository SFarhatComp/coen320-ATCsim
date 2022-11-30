#ifndef RADAR_H
#define RADAR_H

#include <iostream>
#include <vector>
#include "Aircraft.h"

class Radar
{
	private:
		std::vector<Aircraft*>* aircraftList;
		int radarOriginX;
		int radarOriginY;
		int radarOriginZ;
		int radarEndX;;
		int radarEndY;
		int radarEndZ;

	public:
		Radar();
		Radar(int startX, int startY, int startZ, int endX, int endY, int endZ, std::vector<Aircraft*>* list);
		~Radar();
		int getRadarOriginX();
		void setRadarOriginX(int x);
		int getRadarOriginY();
		void setRadarOriginY(int y);
		int getRadarOriginZ();
		void setRadarOriginZ(int z);
		int getRadarEndX();
		void setRadarEndX(int x);
		int getRadarEndY();
		void setRadarEndY(int y);
		int getRadarEndZ();
		void setRadarEndZ(int z);
		void startRadar();
		


};

#endif

