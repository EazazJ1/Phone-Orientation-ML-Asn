
#include "NearestNeighbour.h"

Points::Points()
{
	this->x = 0;
	this->y = 0;
	this->z = 0;
	this->orientation = 0;
}

Points::Points(float x, float y, float z, int orientation)
{
	this->x = x;
	this->y = y;
	this->z = z;
	this->orientation = orientation;
}

float Points:: getx()
{
	return this->x;
}

float Points:: gety()
{
	return this->y;
}

float Points:: getz()
{
	return this->z;
}

int Points:: getOrientation()
{
	return this->orientation;
}

void Points::setx(float x)
{
	this->x = x;
}

void Points::sety(float y)
{
	this->y = y;
}

void Points::setz(float z)
{
	this->z = z;
}

void Points::setOrientation(int orientation)
{
	this->orientation = orientation;
}
