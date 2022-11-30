#include "Radar.h"

Radar::Radar() {
	this->aircraftList = nullptr;
	this->radarOriginX = 0;
	this->radarOriginY = 0;
	this->radarOriginZ = 0;
	this->radarEndX = 0;
	this->radarEndY = 0;
	this->radarEndZ = 0;
}

Radar::Radar(int startX, int startY, int startZ, int endX, int endY, int endZ, std::vector<Aircraft*>* list) {
	this->aircraftList = list;
	this->radarOriginX = startX;
	this->radarOriginY = startY;
	this->radarOriginZ = startZ;
	this->radarEndX = endX;
	this->radarEndY = endY;
	this->radarEndZ = endZ;
}

Radar::~Radar() {

}

// Set Get OriginX

int Radar::getRadarOriginX() {
	return this->radarOriginX;
}

void Radar::setRadarOriginX(int radarOriginX) {
	this->radarOriginX = radarOriginX;
}



//Get set for OriginY
int Radar::getRadarOriginY() {
	return this->radarOriginY;
}

void Radar::setRadarOriginY(int radarOriginY) {
	this->radarOriginY = radarOriginY;
}

//Get Set for OriginZ

int Radar::getRadarOriginZ() {
	return this->radarOriginZ;
}


void Radar::setRadarOriginZ(int radarOriginZ) {
	this->radarOriginZ = radarOriginZ;
}



//Get Set for END X


int Radar::getRadarEndX() {
	return this->radarEndX;
}

void Radar::setRadarEndX(int radarEndX) {
	this->radarEndX = radarEndX;

}


//Get Set for END Y


int Radar::getRadarEndY() {
	return this->radarEndY;
}

void Radar::setRadarEndY(int radarEndY) {
	this->radarEndY = radarEndY;

}

//Get Set for END Z
int Radar::getRadarEndZ() {
	return this->radarEndZ;
}

void Radar::setRadarEndZ(int radarEndZ) {
	this->radarEndZ = radarEndZ;

}

void Radar::startRadar() {
	while (true) {
		for (int i = 0; i < aircraftList->size(); i++) {
			Aircraft* tempAircraft = aircraftList->at(i);
			if (tempAircraft->getXPosition() < radarEndX && tempAircraft->getXPosition() > radarOriginX && tempAircraft->getYPosition() < radarEndY && tempAircraft->getYPosition() > radarOriginY && tempAircraft->getZPosition() < radarEndZ && tempAircraft->getZPosition() > radarOriginZ) {
				aircraftList->at(i)->setInAirspaceFlag(true);
			}
			else {
				aircraftList->at(i)->setInAirspaceFlag(false);
			}
		}
	}
}
