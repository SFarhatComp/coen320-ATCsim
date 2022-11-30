#include "Aircraft.h"

Aircraft::Aircraft() {
	this->xPosition = 0;
	this->yPosition = 0;
	this->zPosition = 0;
	this->xSpeed = 0;
	this->ySpeed = 0;
	this->zSpeed = 0;
	this->arrivalTime = 0;
	this->id = 0;
}

Aircraft::Aircraft(double x, double y, double z, double speedX, double speedY, double speedZ, int iD, double time){
	this->xPosition = x;
	this->yPosition = y;
	this->zPosition = z;
	this->xSpeed = speedX;
	this->ySpeed = speedY;
	this->zSpeed = speedZ;
	this->arrivalTime = time;
	this->id = iD;
}

Aircraft::~Aircraft() {

}

double Aircraft::getXPosition() {
	return this->xPosition;
}

void Aircraft::setXPosition(double x) {
	this->xPosition = x;
}

double Aircraft::getYPosition() {
	return this->yPosition;
}

void Aircraft::setYPosition(double y) {
	this->yPosition = y;
}

double Aircraft::getZPosition() {
	return this->zPosition;
}

void Aircraft::setZPosition(double z) {
	this->zPosition = z;
}

double Aircraft::getXSpeed() {
	return this->xSpeed;
}

void Aircraft::setXSpeed(double xSpeed) {
	this->xSpeed = xSpeed;
}

double Aircraft::getYSpeed() {
	return this->ySpeed;
}

void Aircraft::setYSpeed(double ySpeed) {
	this->ySpeed = ySpeed;
}

double Aircraft::getZSpeed() {
	return this->zSpeed;
}

void Aircraft::setZSpeed(double zSpeed) {
	this->zSpeed = zSpeed;
}

int Aircraft::getID() {
	return this->id;
}

void Aircraft::setID(int id) {
	this->id = id;
}

double Aircraft::getArrivalTime() {
	return this->arrivalTime;
}

void Aircraft::setArrivalTime(double time) {
	this->arrivalTime = time;
}

void Aircraft::fly() {
	this->xPosition += this->xSpeed;
	this->yPosition += this->ySpeed;
	this->zPosition += this->zSpeed;
}

bool Aircraft::getInAirspaceFlag() {
	return this->inAirspaceFlag;
}

void Aircraft::setInAirspaceFlag(bool flag) {
	this->inAirspaceFlag = flag;
}