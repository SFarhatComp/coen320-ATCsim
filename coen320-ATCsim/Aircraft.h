#ifndef AIRCRAFT_H
#define AIRCRAFT_H

#include <iostream>

class Aircraft
{
	private:
		double xPosition;
		double yPosition;
		double zPosition;
		double xSpeed;
		double ySpeed;
		double zSpeed;
		bool inAirspaceFlag;
		int id;
		double arrivalTime;

	public:
		Aircraft();
		Aircraft(double x, double y, double z, double speedX, double speedY, double speedZ, int iD, double time);
		~Aircraft();
		double getXPosition();
		void setXPosition(double x);
		double getYPosition();
		void setYPosition(double y);
		double getZPosition();
		void setZPosition(double z);
		double getXSpeed();
		void setXSpeed(double xSpeed);
		double getYSpeed();
		void setYSpeed(double ySpeed);
		double getZSpeed();
		void setZSpeed(double zSpeed);
		int getID();
		void setID(int id);
		double getArrivalTime();
		void setArrivalTime(double time);
		bool getInAirspaceFlag();
		void setInAirspaceFlag(bool flag);
		void fly();

};

#endif

